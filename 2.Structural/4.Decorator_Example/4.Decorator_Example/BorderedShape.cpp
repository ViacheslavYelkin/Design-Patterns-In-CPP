#include <iostream>

#include "BorderedShape.h"

BorderedShape::BorderedShape(IShape& shape, float thickness, const std::string& color) 
	: shape_{ shape }, thickness_{ thickness }, color_{color}
{
}

void BorderedShape::draw()
{
	shape_.draw();
	std::cout << " with border of color " << color_ << " and thickness " << thickness_;
}
