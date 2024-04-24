#pragma once

#include <vector>
#include <string>
#include <initializer_list>

class Customer;

class BookStore { // observable
public:

	BookStore() = default;
	BookStore(const std::initializer_list<std::string>& books);

	void addBook(const std::string& book);
	bool sellBook(const std::string book);

	void subscribe(Customer* c);
	void unsubscribe(Customer* c);

	void notify();

private:
	std::vector<std::string> books_{};
	std::vector<Customer*> signed_customers_{};
};