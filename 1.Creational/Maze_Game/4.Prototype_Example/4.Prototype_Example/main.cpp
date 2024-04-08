#include <iostream>

#include "MazeGame.h"
#include "MazePrototypeFactory.h"
#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"
#include "DoorNeedingSpell.h"
#include "EnchantedRoom.h"

int main(int argc, char** argv) {

	MazeGame game;
	MazePrototypeFactory prototype{
		new Maze, new Wall, new EnchantedRoom, new DoorNeedingSpell
	};

	Maze* maze = game.CreateMaze(prototype);

	return EXIT_SUCCESS;
}