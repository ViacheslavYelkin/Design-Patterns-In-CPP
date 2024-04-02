#include "MazeGame.h"
#include "MazeFactory.h"
#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"

#include "Direction.h"

MazeGame::MazeGame()
{
}

Maze* MazeGame::CreateMaze(MazeFactory& factory)
{
    Maze* maze = factory.MakeMaze();
    Room* r1 = factory.MakeRoom(1);
    Room* r2 = factory.MakeRoom(2);
    Door* door = factory.MakeDoor(r1, r2);

    maze->AddRoom(r1);
    maze->AddRoom(r2);

    r1->SetSide(EDirection::North, factory.MakeWall());
    r1->SetSide(EDirection::East, door);
    r1->SetSide(EDirection::South, factory.MakeWall());
    r1->SetSide(EDirection::West, factory.MakeWall());
    
    r2->SetSide(EDirection::North, factory.MakeWall());
    r2->SetSide(EDirection::East, factory.MakeWall());
    r2->SetSide(EDirection::South, factory.MakeWall());
    r2->SetSide(EDirection::West, door);

    return nullptr;
}
