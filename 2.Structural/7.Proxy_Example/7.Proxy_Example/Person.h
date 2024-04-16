#pragma once

#include <string>

class Person
{
	friend class ResponsiblePerson;
	int age_;
public:
	Person(int age);

	int getAge() const;
	void setAge(int age);

	std::string drink() const;
	std::string drive() const;
	std::string drinkAndDrive() const;
};