#pragma once

#include "Shape.h"

class Circle : public IShape {
public:

	Circle(IShape& shape, float radius);

	virtual void draw() override;
	void resize(float factor);

private:
	IShape& shape_;
	float radius_{};
};