#pragma once

#include "MazeGame.h"

class BombedMazeGame : public MazeGame {
public:
	BombedMazeGame();

	virtual Room* CreateRoom(int room_no) const;
	virtual Wall* CreateWall() const;


};