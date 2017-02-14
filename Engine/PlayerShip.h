#pragma once

#include "Graphics.h"
#include "Position.h"

class PlayerShip {
public:
	int GetHP();
	void Draw(Graphics& gfx);
	void Update();
	void Fire();
	void GetHit();
	bool isAlive = true;
	void ClampToScreen();
	Position pos = { 700,700 };
private:
	int hp = 100;
	static constexpr int halfWidth = 50;
	static constexpr int halfHeight = 50;
	float cooldownTime = 0.8f;
	Color color = Colors::Blue;
};