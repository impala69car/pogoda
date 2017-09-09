#pragma once
#include <string>
#include <SDL.h>
using namespace std;
class Game_2d
{
public:
	Game_2d(const string &title, int width, int height);
	~Game_2d();
	void recycle() const;
	void sprint(int day1, int day2,int day3, int day4,int day5,int day6,int day7);
	inline bool gameOver() const { return false; };

private:
	bool init();
private:
	string _title;
	int wgame;
	int hgame;

	bool _closed;
	SDL_Window *_game_2d;
protected:
	SDL_Renderer *_renderer;
};