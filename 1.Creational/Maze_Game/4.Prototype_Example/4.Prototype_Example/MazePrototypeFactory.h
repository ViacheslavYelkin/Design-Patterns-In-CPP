#pragma once

#include "MazeFactory.h"

class Maze;
class Wall;
class Room;
class Door;


class MazePrototypeFactory : public MazeFactory {
public:
	MazePrototypeFactory(Maze*, Wall*, Room*, Door*);

	virtual Maze* MakeMaze() const;
	virtual Room* MakeRoom(int n) const;
	virtual Door* MakeDoor(Room* r1, Room* r2) const;
	virtual Wall* MakeWall() const;

private:
	Maze* prototype_maze_{};
	Room* prototype_room_{};
	Door* prototype_door_{};
	Wall* prototype_wall_{};

};