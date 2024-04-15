#pragma once

#include "Shape.h"

class Square : public IShape {
public:

	Square() = default;

	virtual void draw() override;

};