#include <iostream>
#include <memory>

#include "Renderer.h"
#include "VectorRenderer.h"
#include "RasterRenderer.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

int main(int argc, char** argv) {

	std::unique_ptr<IShape> shape1 = std::make_unique<Circle>(new VectorRenderer());
	std::unique_ptr<IShape> shape2 = std::make_unique<Square>(new RasterRenderer());
	shape1->draw();
	shape2->draw();


	return EXIT_SUCCESS;
}