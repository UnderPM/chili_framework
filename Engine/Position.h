#pragma once

class Position {
public:
	bool operator==(const Position& rhs) const
	{
		return x == rhs.x && y == rhs.y;
	}
	int x;
	int y;
};