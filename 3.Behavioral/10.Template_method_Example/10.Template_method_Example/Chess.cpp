#include "Chess.h"

Chess::Chess()
	: Game{ 2 }
{
}

void Chess::start()
{
	std::cout << "Starting a game of chess with " << number_of_players << " players\n";
}

bool Chess::have_winner()
{
	return turns == max_turns;
}

void Chess::take_turn() 
{
	std::cout << "Turn " << turns << " taken by player " << current_player << "\n";
	turns++;
	current_player = (current_player + 1) % number_of_players;
}

int Chess::get_winner()
{
	return current_player;
}
