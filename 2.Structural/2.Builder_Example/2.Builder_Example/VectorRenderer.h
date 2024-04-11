#pragma once

#include "Renderer.h"

class VectorRenderer : public IRenderer {
	virtual void drawObject(const std::string& name) const override;
};