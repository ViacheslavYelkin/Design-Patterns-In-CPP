#pragma once

#include "IMazeBuilder.h"

class StandardMazeBuilder : public IMazeBuilder {

public:
	StandardMazeBuilder();

	virtual void BuildMaze() override;
	virtual void BuildRoom(int room_no) override;
	virtual void BuildDoor(int room_from, int room_to) override;

	virtual Maze* GetMaze() override;

private:
	Maze* current_maze_{};
};