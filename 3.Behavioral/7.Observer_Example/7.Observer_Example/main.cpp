#include <iostream>

#include "BookStore.h"
#include "Customer.h"

int main() {

	BookStore store{{"1984", "Design Patterns", "C++ Handbook", "Mystery stories of Landfield"}};

	Customer c1{"1984", store};
	Customer c2{ "How its work?", store};
	Customer c3{ "Shrek", store };

	c1.buyBook();
	c2.buyBook();
	c3.buyBook();

	store.addBook("Shrek");
	store.addBook("How its work?");



	return EXIT_SUCCESS;
}