#include "PlayerShip.h"

int PlayerShip::GetHP()
{
	return hp;
}

void PlayerShip::Draw(Graphics & gfx)
{
	gfx.DrawRectFromCenter(700, 700, 50, 50, Colors::Blue);
}
