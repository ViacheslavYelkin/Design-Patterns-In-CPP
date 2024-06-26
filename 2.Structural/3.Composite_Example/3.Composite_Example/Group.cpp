#include <iostream>

#include "Group.h"

Group::Group(const std::string& name) :
	name_{name}
{
}

void Group::draw()
{
	std::cout << "Drawning group named: " << name_ << "[\n";
	for (auto& obj : objects_) {
		obj->draw();
	}
	std::cout << "\n]" << std::endl;
}

void Group::move()
{
	std::cout << "Moving group named: " << name_ << "[\n";
	for (auto& obj : objects_) {
		obj->move();
	}
	std::cout << "\n]" << std::endl;
}

void Group::add(IGraphicObject* obj)
{
	objects_.push_back(obj);
}
