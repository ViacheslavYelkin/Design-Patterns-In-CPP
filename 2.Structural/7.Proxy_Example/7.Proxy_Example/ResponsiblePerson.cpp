#include "ResponsiblePerson.h"
#include "Person.h"


ResponsiblePerson::ResponsiblePerson(Person& person)
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

    return "drinking";
}

std::string ResponsiblePerson::drive() const {
    if (person_.age_ < 16) {
        return "too young";
    }

    return "driving";
}

std::string ResponsiblePerson::drinkAndDrive() const { 
    return "dead"; 
}