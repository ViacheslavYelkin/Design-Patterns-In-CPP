#include <iostream>

#include "DoorNeedingSpell.h"


DoorNeedingSpell::DoorNeedingSpell()
{
}

DoorNeedingSpell::DoorNeedingSpell(Room*, Room*)
{
	std::cout << "Creating door which needing spell\n";
}

void DoorNeedingSpell::Enter()
{
}