#pragma once

#include "Renderer.h"

class RasterRenderer : public IRenderer {
	virtual void drawObject(const std::string& name) const override;
};