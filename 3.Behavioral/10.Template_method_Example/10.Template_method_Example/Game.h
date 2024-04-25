#pragma once

#include <iostream>

class Game
{
public:
	explicit Game(int number_of_players);

	void run();

protected:
	virtual void start() = 0;
	virtual bool have_winner() = 0;
	virtual void take_turn() = 0;
	virtual int get_winner() = 0;

	int current_player{ 0 };
	int number_of_players;
};