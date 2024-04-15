#include <iostream>

#include "Circle.h"

Circle::Circle(IShape& shape, float radius)
	:shape_{ shape }, radius_{radius}
{
}

void Circle::draw()
{
	std::cout << "Drawning circle";
}

void Circle::resize(float factor)
{
	radius_ *= factor;
}
