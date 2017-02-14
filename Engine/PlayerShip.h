#pragma once

#include "Graphics.h"

class PlayerShip {
public:
	int GetHP();
	void Draw(Graphics& gfx);
	void Update();
	void Fire();
private:
	int hp = 100;
	float cooldownTime = 0.8f;
};