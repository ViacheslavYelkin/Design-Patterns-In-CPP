#include <iostream>

#include "MazeFactory.h"


int main(int argc, char** argv) {

	MazeFactory* factory1 = MazeFactory::Instance();
	MazeFactory* factory2 = MazeFactory::Instance();

	std::cout << factory1 << '\n'; 
	std::cout << factory2 << '\n'; //should print same memory address
	
	return EXIT_SUCCESS;
}