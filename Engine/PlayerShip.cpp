#include "PlayerShip.h"

int PlayerShip::GetHP()
{
	return hp;
}

void PlayerShip::Draw(Graphics & gfx)
{
	gfx.DrawRectByDim(650, 650, 100, 100, Colors::Green);
}
