#pragma once

#include <string>

class IRenderer;

class IShape {
protected:
	IShape(IRenderer* rn, const std::string& name)
		: rn_{ rn }, name_{ name }
	{}
	virtual void draw() = 0;

	IRenderer* rn_{};
	std::string name_{};
};