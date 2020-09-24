#pragma once

#include "Vec2.h"
#include "RectF.h"
#include "Colors.h"
#include "SpriteCodex.h"

class Ball
{
public:
	Ball() = default;
	Ball(const Vec2& pos_in, const Vec2& vel_in);
	void Draw(Graphics& gfx) const;
	void Update(float dt);
private:
	Vec2 pos;
	Vec2 vel;
	float radius;
};