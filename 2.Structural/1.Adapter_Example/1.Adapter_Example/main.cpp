#include <iostream>

#include "Square.h"
#include "SquareToRectangleAdapter.h"


int main(int argc, char** argv) {

	Square* sq = new Square(11);

	SquareToRectangleAdapter sra(*sq);

	std::cout << sra.area() << std::endl;

	return EXIT_SUCCESS;
}