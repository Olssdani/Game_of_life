#pragma once
class Grid
{
public:
	Grid();
	~Grid();
	void print();
	void change_status();

private:
	const static int SIZE_X = 80;
	const static int SIZE_Y = 50;
	bool(*grid)[SIZE_X];
	bool active;
};

