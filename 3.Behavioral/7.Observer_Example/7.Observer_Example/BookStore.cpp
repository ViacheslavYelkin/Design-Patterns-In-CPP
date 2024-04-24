#include <algorithm>
#include <sstream>

#include "Customer.h"
#include "BookStore.h"

BookStore::BookStore(const std::initializer_list<std::string>& books)
	: books_{books}
{
}

void BookStore::addBook(const std::string& book)
{
	books_.push_back(book);
	notify();
}

bool BookStore::sellBook(const std::string book)
{
	if (std::find(std::begin(books_), std::end(books_), book) != std::end(books_)) {
		books_.erase(
			std::remove(std::begin(books_), std::end(books_), book),
			std::end(books_)
		);
		return true;
	}

	return false;
}

void BookStore::subscribe(Customer* c)
{
	signed_customers_.push_back(c);
}

void BookStore::unsubscribe(Customer* c)
{
	signed_customers_.erase(
		std::remove(std::begin(signed_customers_), std::end(signed_customers_), c),
		std::end(signed_customers_)
	);
}

void BookStore::notify()
{
	for (auto&& c : signed_customers_) {
		if (c->desired_book_ == books_.back()) {
			std::ostringstream ss;
			ss << "Dear customer #" << c << " your book has arrived to the store";
			
			std::string message{ss.str()};
			c->receiveNotification(message);
		}
	}
}
