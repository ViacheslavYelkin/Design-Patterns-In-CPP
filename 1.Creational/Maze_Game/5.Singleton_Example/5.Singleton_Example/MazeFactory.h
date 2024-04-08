#pragma once

class Maze;
class Room;
class Door;
class Wall;

// "Abstract factory" also can be called as "Kit" and classes that implement this pattern can be called as WidgetKit for instance

class MazeFactory {

public:

	static MazeFactory* Instance();

protected:
	MazeFactory();

private:
	inline static MazeFactory* instance_{nullptr};

};