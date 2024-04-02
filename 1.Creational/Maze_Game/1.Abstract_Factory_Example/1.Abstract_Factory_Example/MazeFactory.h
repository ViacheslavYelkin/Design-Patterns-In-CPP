#pragma once

class Maze;
class Room;
class Door;
class Wall;

// "Abstract factory" also can be called as "Kit" and classes that implement this pattern can be called as WidgetKit for instance

class MazeFactory {

public:

	MazeFactory();

	virtual Maze* MakeMaze() const;
	virtual Room* MakeRoom(int n) const;
	virtual Door* MakeDoor(Room* r1, Room* r2) const;
	virtual Wall* MakeWall() const;


};