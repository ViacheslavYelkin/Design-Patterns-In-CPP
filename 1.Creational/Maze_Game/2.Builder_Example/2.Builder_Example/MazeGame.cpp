#include "MazeGame.h"
#include "IMazeBuilder.h"

MazeGame::MazeGame()
{
}

Maze* MazeGame::CreateMaze(IMazeBuilder& builder)
{
	builder.BuildMaze();

	builder.BuildRoom(1);
	builder.BuildRoom(2);
	builder.BuildDoor(1, 2);

	return builder.GetMaze();
}
