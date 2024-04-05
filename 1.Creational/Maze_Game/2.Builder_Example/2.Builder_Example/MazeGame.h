#pragma once

class IMazeBuilder;
class Maze;

class MazeGame {

public:
	MazeGame();

	Maze* CreateMaze(IMazeBuilder& builder);

};