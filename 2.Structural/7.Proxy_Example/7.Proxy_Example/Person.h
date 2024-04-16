#pragma once

#include <string>

class Person
{
	int age_;
public:
	Person(int age);

	int get_age() const;
	void set_age(int age);

	std::string drink() const;
	std::string drive() const;
	std::string drink_and_drive() const;
};