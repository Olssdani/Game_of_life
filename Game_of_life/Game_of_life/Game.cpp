#include "stdafx.h"
#include "Game.h"
#include <iostream>
#include "Grid.h"


Game::Game()
{
	
	setup();
	print_board();
}


Game::~Game()
{}

void Game::setup() {
}

void Game::print_board() {

}

void Game::change_grid() {
	grid1.change_status();
	grid2.change_status();
}