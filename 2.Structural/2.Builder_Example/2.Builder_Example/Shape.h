#pragma once

#include <string>

class IRenderer;

class IShape {
protected:
	IShape(IRenderer* rn, const std::string& name)
		: rn_{ rn }, name_{ name }
	{}

	IRenderer* rn_{};
	std::string name_{};
public:
	virtual void draw() = 0;
};