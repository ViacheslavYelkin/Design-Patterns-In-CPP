#include <iostream>

#include "Maze.h"
#include "MazeGame.h"
#include "BombedMazeGame.h"

int main(int argc, char** argv) {

	Maze* maze;
	MazeGame maze_game;

	BombedMazeGame bombed_game;

	maze = maze_game.CreateGame();
	delete maze;
	
	std::cout << "------------------------------------\n----------------------------------\n";

	maze = bombed_game.CreateGame();
	delete maze;

	return EXIT_SUCCESS;
}