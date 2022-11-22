#ifndef GRID_H
#define GRID_H

#include <ostream>
#include "pair.h"

const int GRID_SIZE_X = 5;
const int GRID_SIZE_Y = 5;

class Grid{
    bool grid[GRID_SIZE_X][GRID_SIZE_Y];

    public:
    Grid();
    void render(std::ostream& stream, Pair<int> start = Pair<int>(0,0), Pair<int> end = Pair<int>(0, GRID_SIZE_Y));
    bool canMove(Pair<int>& a, Pair<int>& b);
    Pair<int> nextMove(Pair<int>& a, Pair<int>& b);
};

#endif