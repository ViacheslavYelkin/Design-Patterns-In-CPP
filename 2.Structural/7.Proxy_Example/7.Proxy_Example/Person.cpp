#include "Person.h"

Person::Person(int age) : age_{age} {}

int Person::getAge() const {
	return age_; 
}

void Person::setAge(int age) { 
	age_ = age; 
}

std::string Person::drink() const { 
	return "drinking"; 
}

std::string Person::drive() const { 
	return "driving"; 
}

std::string Person::drinkAndDrive() const { 
	return "driving while drunk"; 
}
