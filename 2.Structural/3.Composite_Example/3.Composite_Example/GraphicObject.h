#pragma once


class IGraphicObject {
public:
	virtual void draw() = 0;
	virtual void move() = 0;

protected:
	IGraphicObject() = default;

};