#pragma once

#include "Shape.h"

class Circle : public IShape {
public:

	Circle() = default;
	Circle(float radius);

	virtual void draw() override;
	void resize(float factor);

private:
	float radius_{};
};