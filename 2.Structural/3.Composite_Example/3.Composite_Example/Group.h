#pragma once

#include <string>
#include <vector>

#include "GraphicObject.h"

class Group : public IGraphicObject {
public:

	Group(const std::string& name);

	virtual void draw() override;
	virtual void move() override;

	void add(IGraphicObject* obj);

private: 
	std::string name_{};
	std::vector<IGraphicObject*> objects_{};
};