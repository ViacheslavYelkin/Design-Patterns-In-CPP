#pragma once

#include <string>

#include "Shape.h"


class BorderedShape : public IShape {
public:

	BorderedShape(IShape& shape, float thickness, const std::string& color);
	
	virtual void draw() override;

private:
	IShape& shape_;
	float thickness_{};
	std::string color_{};
};