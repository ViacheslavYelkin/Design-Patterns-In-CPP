#include <iostream>

#include "Door.h"

Door::Door()
{
}

Door::Door(Room*, Room*)
{
	std::cout << "Creating simple door\n";
}

void Door::Enter()
{
}
