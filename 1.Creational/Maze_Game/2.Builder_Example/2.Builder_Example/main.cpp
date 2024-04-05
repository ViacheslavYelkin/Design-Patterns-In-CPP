#include <iostream>

#include "Maze.h"
#include "MazeGame.h"
#include "StandardMazeBuilder.h"


int main(int argc, char** argv) {
	Maze* maze;
	MazeGame maze_game;
	StandardMazeBuilder builder;

	maze_game.CreateMaze(builder);
	maze = builder.GetMaze();
	
	return EXIT_SUCCESS;
}