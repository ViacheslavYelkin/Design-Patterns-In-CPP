#include "MazeFactory.h"
#include "Maze.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"


MazeFactory::MazeFactory()
{
}

Maze* MazeFactory::MakeMaze() const
{
	return new Maze;
}

Room* MazeFactory::MakeRoom(int n) const
{
	return new Room(n);
}

Door* MazeFactory::MakeDoor(Room* r1, Room* r2) const
{
	return new Door(r1, r2);
}

Wall* MazeFactory::MakeWall() const
{
	return new Wall;
}
