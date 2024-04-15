#include <iostream>

#include "Circle.h"

Circle::Circle(float radius)
	:radius_{radius}
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
