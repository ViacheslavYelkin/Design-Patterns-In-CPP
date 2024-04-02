#include <iostream>

#include "MazeGame.h"
#include "MazeFactory.h"
#include "EnchantedMazeFactory.h"

int main(int argc, char** argv) {

	MazeGame game;
	MazeFactory simple_factory;
	EnchantedMazeFactory enchanted_factory;

	game.CreateMaze(enchanted_factory);


	return EXIT_SUCCESS;
}