#pragma once

#include "GraphicObject.h"


class Circle : public IGraphicObject {
public:
	virtual void draw() override;
	virtual void move() override;

};