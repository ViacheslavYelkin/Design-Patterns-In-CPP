#pragma once


template <typename T>
struct Node {
	T value_{};
	Node<T>* next_{nullptr};

	Node(T value)
		: value_{ value }
	{
	}

	Node(T value, Node<T>* parent) 
		: value_{ value } 
	{
		parent->next_ = this;
	}

	~Node() {
		if (next_) {
			delete next_;
		}
	}
};


template <typename T>
class List {
public:
	List() = default;
	List(Node<T>* head) :
		head_{ head }
	{

	}
	~List()
	{
		if (head_) {
			delete head_;
		}
	}

	void add(Node<T>* node)
	{
		if (head_) {
			Node<T>* current = head_;
			while (current->next_) {
				current = current->next_;
			}
			current->next_ = node;
		}
		else {
			head_ = node;
		}
	}

	struct iterator {

		iterator(Node<T>* current)
			: current_{ current }
		{
		}

		bool operator!=(const iterator& other)
		{
			return current_ != other.current_;
		}

		iterator& operator++()
		{
			current_ = current_->next_;
			return *this;
		}

		Node<T>& operator*()
		{
			return *current_;
		}

		Node<T>* operator->() {
			return current_;
		}

		Node<T>* current_{ nullptr };
	}; // End of iterator class

	iterator begin() {
		return iterator{head_};
	}

	iterator end() {
		return iterator{ nullptr };
	}

private:
	Node<T>* head_{ nullptr };
};

