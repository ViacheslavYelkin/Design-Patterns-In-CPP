#pragma once

#include "Shape.h"


class Square : public IShape {
public:
	Square(IRenderer* rn);
	virtual void draw() override;
};