#pragma once

class MazeFactory;
class Maze;
class Room;
class Door;
class Wall;

class MazeGame {

public:
	MazeGame();

	Maze* CreateMaze(MazeFactory& factory);

};
