#include "BombedMazeGame.h"
#include "BombedWall.h"
#include "RoomWithBomb.h"

BombedMazeGame::BombedMazeGame()
{
}

Room* BombedMazeGame::CreateRoom(int room_no) const
{
	return new RoomWithBomb(room_no);
}

Wall* BombedMazeGame::CreateWall() const
{
	return new BombedWall();
}
