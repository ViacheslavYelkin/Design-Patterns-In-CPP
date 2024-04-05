#pragma once

class Maze;
class Room;
class Wall;
class Door;

class MazeGame {
public:
	Maze* CreateGame();

	// factory methods

	virtual Maze* CreateMaze() const;
	virtual Room* CreateRoom(int room_no) const;
	virtual Wall* CreateWall () const;
	virtual Door* CreateDoor(Room* r1, Room* r2) const;

};