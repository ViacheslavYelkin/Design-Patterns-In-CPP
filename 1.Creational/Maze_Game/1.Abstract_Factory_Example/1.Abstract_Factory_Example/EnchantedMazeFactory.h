#pragma once

#include "MazeFactory.h"

class EnchantedMazeFactory : public MazeFactory {

public:
	EnchantedMazeFactory();

	virtual Room* MakeRoom(int) const override;
	virtual Door* MakeDoor(Room*, Room*) const override;

};