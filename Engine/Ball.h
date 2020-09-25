#pragma once

#include "Vec2.h"
#include "RectF.h"
#include "Colors.h"
#include "SpriteCodex.h"

class Ball
{
public:
	Ball(const Vec2& pos_in, const Vec2& vel_in);
	void Draw(Graphics& gfx) const;
	void Update(float dt);
	bool DoWallCollision(const RectF& walls);
	RectF GetRect() const;
	void ReboundX();
	void ReboundY();
private:
	float radius = 7.0f;
	Vec2 pos;
	Vec2 vel;
};