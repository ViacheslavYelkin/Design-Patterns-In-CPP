#include "ResponsiblePerson.h"


ResponsiblePerson::ResponsiblePerson(const Person& person)
	: person_{person}
{
}

int ResponsiblePerson::getAge() const { 
    return person_.getAge(); 
}

void ResponsiblePerson::setAge(int age) { 
    person_.setAge(age); 
}

std::string ResponsiblePerson::drink() const {
    if (person_.age_ < 18) {
        return "too young";
    }

    return person_.drink();
}

std::string ResponsiblePerson::drive() const {
    if (person_.age_ < 16) {
        return "too young";
    }

    return person_.drive();
}

std::string ResponsiblePerson::drinkAndDrive() const { 
    return person_.drinkAndDrive() + " then dead"; 
}