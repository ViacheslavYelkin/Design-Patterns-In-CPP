#include <iostream>

#include "Person.h"
#include "ResponsiblePerson.h"

int main(int argc, char** argv) {

	ResponsiblePerson child(Person(13));
	std::cout << child.drink() << '\n' << child.drive() << '\n';

	std::cout << "-------------------------------------------\n";

	child.setAge(16);
	std::cout << child.drink() << '\n' << child.drive() << '\n';
	
	std::cout << "-------------------------------------------\n";

	ResponsiblePerson adult(Person(20));
	std::cout << adult.drink() << '\n' << adult.drive() << '\n';
	std::cout << adult.drinkAndDrive() << '\n';

	return EXIT_SUCCESS;
}