#include "EnchantedMazeFactory.h"
#include "DoorNeedingSpell.h"
#include "EnchantedRoom.h"


EnchantedMazeFactory::EnchantedMazeFactory()
{
}

Room* EnchantedMazeFactory::MakeRoom(int n) const
{
    return new EnchantedRoom(n);
}

Door* EnchantedMazeFactory::MakeDoor(Room* r1, Room* r2) const
{
    return new DoorNeedingSpell(r1, r2);
}
