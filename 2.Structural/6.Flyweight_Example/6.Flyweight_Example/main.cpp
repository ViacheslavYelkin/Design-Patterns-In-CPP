#include <iostream>

#include "User.h"

int main(int argc, char** argv) {

	User user1{ "Sam", "Smith" };
	User user2{ "Bob", "Smith" };

	std::cout << user1 << user2;

	return EXIT_SUCCESS;
}