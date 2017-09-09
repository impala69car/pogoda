#include "wall.h"
#include "game_2d.h"
#include <iostream>
#include <fstream>
#include <ctime>
Wall::Wall(const Game_2d &game_2d, int w, int h, int x, int y, int r, int g, int b, int a) :
	Game_2d(game_2d), wg(w), hg(h), xg(x), yg(y), rg(r), gg(g), gb(b), ag(a)
{

}
void Wall::draw() const
{
	SDL_Rect wall;
	wall.w = wg;
	wall.h = hg;
	wall.x = xg;
	wall.y = yg;
	SDL_SetRenderDrawColor(_renderer, 200, 0, 200, 255);
	SDL_RenderFillRect(_renderer, &wall);
}