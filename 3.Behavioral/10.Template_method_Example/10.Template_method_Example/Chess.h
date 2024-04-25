#pragma once
#include <iostream>

#include "Game.h"

class Chess : public Game
{
public:
	explicit Chess();

protected:
	void start() override;

	bool have_winner() override;

	void take_turn() override;

	int get_winner() override;

private:
	int turns{ 0 }, max_turns{ 10 };
};