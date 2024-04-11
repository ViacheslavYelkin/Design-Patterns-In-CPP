#pragma once

#include "Shape.h"


class Circle : public IShape {
public:
	Circle(IRenderer* rn);
	virtual void draw() override;
};