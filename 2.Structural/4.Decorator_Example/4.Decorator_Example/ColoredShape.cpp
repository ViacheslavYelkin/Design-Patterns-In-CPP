#include <iostream>

#include "ColoredShape.h"

ColoredShape::ColoredShape(IShape& shape, const std::string& color) 
	: shape_{ shape }, color_{color}
{
}

void ColoredShape::draw()
{
	shape_.draw();
	std::cout << " with color " << color_;
}
