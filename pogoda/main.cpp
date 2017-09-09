#include "game_2d.h"
#include "wall.h"
#include <ctime>

int main(int argc, char **argv)
{
	int t[45];
	t[0]=0;
	for(int i=1;i<45;i++)
	{
			t[i]= i;
	}
	Game_2d game_2d("Temperature", 800, 600);
	int day1 = rand() % t[44] + t[0];
	int day2 = rand() % t[44] + t[0];
	int day3 = rand() % t[44] + t[0];
	int day4 = t[10];
	int day5 = rand() % t[44] + t[0];
	int day6 = t[15];
	int day7 = rand() % t[44] + t[0];
	Wall wall1(game_2d,day1*10,30,100,100,200,0,200,255);
	Wall wall2(game_2d,day2*10,30,100,150,200,0,200,255);
	Wall wall3(game_2d,day3*10,30,100,200,200,0,200,255);
	Wall wall4(game_2d,day4*10,30,100,250,200,0,200,255);
	Wall wall5(game_2d,day5*10,30,100,300,200,0,200,255);
	Wall wall6(game_2d,day6*10,30,100,350,200,0,200,255);
	Wall wall7(game_2d,day7*10,30,100,400,200,0,200,255);
	game_2d.sprint(day1,day2,day3,day4,day5,day6,day7);
	while (!game_2d.gameOver())
	{
		wall1.draw();
		wall2.draw();
		wall3.draw();
		wall4.draw();
		wall5.draw();
		wall6.draw();
		wall7.draw();
		game_2d.recycle();
	}
	return 0;
}