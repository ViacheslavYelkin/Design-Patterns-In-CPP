#pragma once

#include <string>

class IRenderer {
public: 
	virtual void drawObject(const std::string& name) const = 0;
};