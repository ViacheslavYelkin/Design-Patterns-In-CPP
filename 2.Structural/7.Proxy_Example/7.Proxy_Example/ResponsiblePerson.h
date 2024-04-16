#pragma once

#include <string>

#include "Person.h"

class ResponsiblePerson
{
public:
    ResponsiblePerson(const Person& person);

    int getAge() const;
    void setAge(int age);

    std::string drink() const;
    std::string drive() const;
    std::string drinkAndDrive() const;

private:
    Person person_;
};