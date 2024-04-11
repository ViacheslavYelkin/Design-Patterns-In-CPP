#include "Square.h"
#include "Renderer.h"

Square::Square(IRenderer* rn)
	: IShape(rn, "Square")
{}

void Square::draw()
{
	rn_->drawObject(name_);
}
