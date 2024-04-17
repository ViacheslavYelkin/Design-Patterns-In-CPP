#pragma once

#include <iostream>
#include <string>


class Creature {

	friend std::ostream& operator<<(std::ostream& os, const Creature& obj);

public:
	Creature(const std::string& name, int attack, int defense);

private:
	std::string name_{};
	int attack_;
	int defense_{};
};