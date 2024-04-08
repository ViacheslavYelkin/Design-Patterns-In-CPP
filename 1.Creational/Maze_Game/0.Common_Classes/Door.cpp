#include <iostream>

#include "Door.h"

Door::Door()
{
}

Door::Door(Room*, Room*)
{
	std::cout << "----------------------\nCreating simple door\n";
}

void Door::Enter()
{
}

Door* Door::Clone() const
{
	return new Door(*this);
}

void Door::Initialize(Room* r1, Room* r2)
{
	r1_ = r1;
	r2_ = r2;
}
