#pragma once

#include "RectF.h"
#include "Colors.h"
#include "Graphics.h"

class Brick
{
public:
	Brick(const RectF& rect_in, const Color& color_in);
	void Draw(Graphics& gfx) const;
private:
	RectF rect;
	Color color;
	bool destroyed = false;
};