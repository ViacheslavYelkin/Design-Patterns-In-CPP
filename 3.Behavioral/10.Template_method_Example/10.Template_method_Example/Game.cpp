#include "Game.h"

Game::Game(int number_of_players) 
	: number_of_players(number_of_players)
{
}

void Game::run()
{
	start();
	while (!have_winner())
		take_turn();
	std::cout << "Player " << get_winner() << " wins.\n";
}
