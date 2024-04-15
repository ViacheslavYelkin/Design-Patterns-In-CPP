#pragma once

#include <string>

#include "Shape.h";


class ColoredShape : public IShape {
public:

	ColoredShape(IShape& shape, std::string& color);

	virtual void draw() override;

private:
	IShape& shape_;
	std::string color_{};
};