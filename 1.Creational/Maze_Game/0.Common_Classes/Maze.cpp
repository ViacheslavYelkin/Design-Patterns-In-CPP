#include <iostream>

#include "Maze.h"
#include "Room.h"

Maze::Maze()
{
}

void Maze::AddRoom(Room* room)
{
	std::cout << "Creating room...\n";
}

Room* Maze::GetRoomByNumber(int no)
{
	return new Room(no);
}
