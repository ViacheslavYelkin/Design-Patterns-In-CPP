#pragma once

#include "Renderer.h"

class RasterRenderer : IRenderer {
	virtual void drawObject(const std::string& name) const override;
};