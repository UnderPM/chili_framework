#include "PlayerShip.h"

int PlayerShip::GetHP()
{
	return hp;
}

void PlayerShip::Draw(Graphics & gfx)
{
	gfx.DrawRectFromCenter(pos.x, pos.y, halfWidth, halfHeight, color);
}

void PlayerShip::GetHit()
{
	hp -= 5;
}

void PlayerShip::ClampToScreen()
{
	const int right = pos.x + halfWidth;
	if (pos.x - halfWidth < 0) {
		pos.x = 0 + halfWidth;
	}
	else if (right >= Graphics::ScreenWidth) {
		pos.x = (Graphics::ScreenWidth - 1) - halfWidth;
	}
	const int bottom = pos.y + halfHeight;
	if (pos.y < 0) {
		pos.y = 0;
	}
	else if (bottom >= Graphics::ScreenHeight) {
		pos.y = (Graphics::ScreenHeight - 1) - halfHeight;
	}
}