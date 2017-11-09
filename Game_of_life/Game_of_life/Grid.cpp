#include "stdafx.h"
#include "Grid.h"
#include <iostream>


Grid::Grid()
{
	grid = new bool[SIZE_Y][SIZE_X];
	for (int i = 0; i < SIZE_Y; ++i)
	{
		for (int j = 0; j < SIZE_X; ++j)
		{
			grid[i][j] = false;	
		}
	}
	active = false;
}


Grid::~Grid()
{
}

void Grid::print() {
	for (int i = 0; i < SIZE_Y; ++i) {
		for (int j = 0; j < SIZE_X; ++j) {
			if (grid[i][j]) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}

void Grid::change_status() {
	if (active == false) {
		active = true;
	}
	else {
		active = false;
	}
}