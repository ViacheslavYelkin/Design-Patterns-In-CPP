#pragma once

#include "GraphicObject.h"


class Square : public IGraphicObject {
public:
	virtual void draw() override;
	virtual void move() override;

};