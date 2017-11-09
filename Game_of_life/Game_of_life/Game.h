#pragma once
#include "Grid.h"
class Game
{
public:
	Game();
	~Game();
	void print_board();
	void setup();
	void change_grid();

private:
	Grid grid1;
	Grid grid2;
};

