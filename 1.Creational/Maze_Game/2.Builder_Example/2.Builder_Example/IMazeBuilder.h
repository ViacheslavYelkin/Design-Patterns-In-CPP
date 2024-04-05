#pragma once

class Maze;
class Room;
class Door;

class IMazeBuilder {
public:
	virtual void BuildMaze() {};
	virtual void BuildRoom(int room_no) {};
	virtual void BuildDoor(int room_from, int room_to) {};
	
	virtual Maze* GetMaze() { return nullptr; };

protected:
	IMazeBuilder() {};
};