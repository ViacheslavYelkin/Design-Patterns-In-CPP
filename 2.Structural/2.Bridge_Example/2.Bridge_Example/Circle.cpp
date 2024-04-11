#include "Circle.h"
#include "Renderer.h"

Circle::Circle(IRenderer* rn)
	: IShape(rn, "Circle")
{}

void Circle::draw()
{
	rn_->drawObject(name_);
}
