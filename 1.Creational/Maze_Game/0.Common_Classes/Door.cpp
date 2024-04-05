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
