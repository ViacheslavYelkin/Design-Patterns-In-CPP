#include "MazePrototypeFactory.h"
#include "Maze.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"

MazePrototypeFactory::MazePrototypeFactory(Maze* maze, Wall* wall , Room* room, Door* door) :
	prototype_maze_{ maze }, prototype_wall_{ wall }, prototype_room_{ room }, prototype_door_{door}
{
}

Maze* MazePrototypeFactory::MakeMaze() const
{
	return prototype_maze_->Clone();
}

Room* MazePrototypeFactory::MakeRoom(int n) const
{
	Room* room = prototype_room_->Clone();
	room->Initialize(n);
	return room;
}

Door* MazePrototypeFactory::MakeDoor(Room* r1, Room* r2) const
{
	Door* door = prototype_door_->Clone();
	door->Initialize(r1, r2);
	return door;
}

Wall* MazePrototypeFactory::MakeWall() const
{
	return prototype_wall_->Clone();
}
