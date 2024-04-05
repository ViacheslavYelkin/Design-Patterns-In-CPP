#include "StandardMazeBuilder.h"
#include "Maze.h";
#include "Room.h"
#include "Direction.h"
#include "Wall.h"
#include "Door.h"

StandardMazeBuilder::StandardMazeBuilder() :
	current_maze_{nullptr}
{
}

void StandardMazeBuilder::BuildMaze()
{
	current_maze_ = new Maze();
}

void StandardMazeBuilder::BuildRoom(int room_no)
{	
	Room* room = new Room(room_no);
	current_maze_->AddRoom(room);
	room->SetSide(EDirection::North, new Wall);
	room->SetSide(EDirection::South, new Wall);
	room->SetSide(EDirection::East, new Wall);
	room->SetSide(EDirection::West, new Wall);
}

void StandardMazeBuilder::BuildDoor(int room_from, int room_to)
{
	Room* r1 = current_maze_->GetRoomByNumber(room_from);
	Room* r2 = current_maze_->GetRoomByNumber(room_to);

	Door* door = new Door(r1, r2);
}

Maze* StandardMazeBuilder::GetMaze()
{
	return current_maze_;
}

