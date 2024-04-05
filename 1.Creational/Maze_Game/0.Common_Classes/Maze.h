#pragma once

class Room;

class Maze {

public:
	Maze();

	void AddRoom(Room*);
	Room* GetRoomByNumber(int no);

};