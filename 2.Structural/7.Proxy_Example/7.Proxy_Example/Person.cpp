#include "Person.h"

Person::Person(int age) : age_{age} {}

int Person::get_age() const {
	return age_; 
}

void Person::set_age(int age) { 
	age_ = age; 
}

std::string Person::drink() const { 
	return "drinking"; 
}

std::string Person::drive() const { 
	return "driving"; 
}

std::string Person::drink_and_drive() const { 
	return "driving while drunk"; 
}
