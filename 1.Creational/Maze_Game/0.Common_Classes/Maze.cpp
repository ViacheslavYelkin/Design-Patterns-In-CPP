#include <iostream>

#include "Maze.h"
#include "Room.h"

Maze::Maze() :
	rooms_{}
{
}

void Maze::AddRoom(Room* room)
{
	std::cout << "----------------------\nAdding room...\n";

	rooms_.push_back(room);
}

Room* Maze::GetRoomByNumber(int no)
{
	std::vector<Room*>::iterator it = rooms_.begin();

	for (; it != rooms_.end(); it++) {
		if ((*it)->GetRoomNumber() == no) {
			return (*it);
		}
	}
	return nullptr;
}

Maze* Maze::Clone() const
{
	return new Maze(*this);
}

