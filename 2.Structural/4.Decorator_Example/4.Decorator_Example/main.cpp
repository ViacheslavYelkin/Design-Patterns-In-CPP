#include <iostream>
#include <string>

#include "Circle.h"
#include "Square.h"
#include "ColoredShape.h"
#include "BorderedShape.h"

int main(int argc, char** argv) {

	Circle circle{4};
	Square square{};

	ColoredShape col_shape{circle, "black"};

	BorderedShape bor_shape1{ col_shape, 2.5, "red" };
	BorderedShape bor_shape2{ square, 15, "green" };

	circle.draw();
	std::cout << '\n';

	col_shape.draw();
	std::cout << '\n';
	
	bor_shape1.draw();
	std::cout << '\n';

	bor_shape2.draw();
	std::cout << '\n';

	return EXIT_SUCCESS;
}