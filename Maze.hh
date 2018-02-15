#include <iostream>
#include <list>

#include "Case.hh"

class Maze
{
public:
	Maze(int x, int y);
	~Maze();

private:
	std::list<Case>	*_theMaze;
	int _sizeX;
	int _sizeY;

public:
	bool createTheMaze();

};