#pragma once

#include <string>

class BookStore;

class Customer { // observer
public:
	std::string desired_book_{};

public:
	Customer(const std::string& book, BookStore& store);

	void buyBook();
	void receiveNotification(const std::string& message);

private:
	BookStore& store_;
};