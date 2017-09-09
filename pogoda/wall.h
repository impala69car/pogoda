#pragma once

#pragma once
#include "game_2d.h"
class Wall : public Game_2d
{
public:
	Wall(const Game_2d &game_2d,int w, int h, int x, int y, int r,int g,int b,int a);
	void draw() const;
private:
	int wg, hg, xg, yg, rg, gg, gb, ag;
};
