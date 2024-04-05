#pragma once

#include <vector>

class Room;

class Maze {

public:
	Maze();

	void AddRoom(Room*);
	Room* GetRoomByNumber(int no);

private:
	std::vector<Room*> rooms_;
};