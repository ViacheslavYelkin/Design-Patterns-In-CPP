#include "MazeGame.h"

#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"
#include "Direction.h"


Maze* MazeGame::CreateGame()
{
    Maze* maze = CreateMaze();

    Room* r1 = CreateRoom(1);
    Room* r2 = CreateRoom(2);
    Door* door = CreateDoor(r1, r2);

    maze->AddRoom(r1);
    maze->AddRoom(r2);
    
    r1->SetSide(EDirection::North, CreateWall());
    r1->SetSide(EDirection::East, CreateWall());
    r1->SetSide(EDirection::South, CreateWall());
    r1->SetSide(EDirection::West, CreateWall());
    
    r2->SetSide(EDirection::North, CreateWall());
    r2->SetSide(EDirection::East, CreateWall());
    r2->SetSide(EDirection::South, CreateWall());
    r2->SetSide(EDirection::West, CreateWall());

    return maze;
}

Maze* MazeGame::CreateMaze() const
{
    return new Maze;
}

Room* MazeGame::CreateRoom(int room_no) const
{
    return new Room(room_no);
}

Wall* MazeGame::CreateWall() const
{
    return new Wall;
}

Door* MazeGame::CreateDoor(Room* r1, Room* r2) const
{
    return new Door(r1, r2);
}
