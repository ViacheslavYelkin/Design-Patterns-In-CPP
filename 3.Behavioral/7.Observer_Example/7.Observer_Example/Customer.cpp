#include <iostream>

#include "BookStore.h"
#include "Customer.h"

Customer::Customer(const std::string& book, BookStore& store)
	: desired_book_{ book }, store_{store}
{
}

void Customer::buyBook()
{
	if (store_.sellBook(desired_book_)) {
		std::cout << "I'm satisfied customer(" << this << ") :)))\n";
		store_.unsubscribe(this);
	}
	else {
		std::cout << "I'm sad customer(" << this << ") :`(((\n";
		store_.subscribe(this);
	}
}

void Customer::receiveNotification(const std::string& message) {
	std::cout << "---------------------------------------\n";
	std::cout << message << '\n';
	std::cout << "---------------------------------------\n";
	buyBook();
}
