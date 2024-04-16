#pragma once

#include <string>

class Person;

class ResponsiblePerson
{
public:
    ResponsiblePerson(Person& person);

    int getAge() const;
    void setAge(int age);

    std::string drink() const;
    std::string drive() const;
    std::string drinkAndDrive() const;

private:
    Person& person_;
};