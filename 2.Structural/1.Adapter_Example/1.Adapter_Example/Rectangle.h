#pragma once

class Rectangle {
public:
	virtual int width() const = 0;
	virtual int height() const = 0;

	int area() const
	{
		return width() * height();
	}
};