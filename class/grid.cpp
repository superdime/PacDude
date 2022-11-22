#include <cstring>
#include "grid.h"

// Reset grid on startup
Grid::Grid(){
    memset(grid, 0, GRID_SIZE_X * GRID_SIZE_Y * sizeof(bool));
}

// Prints grid from two points
// Note: start will be modified
void Grid::render(std::ostream& stream, Pair<int> start, Pair<int> end){
    while (start != end){
        // Print current node
        if (grid[start.x][start.y]){
            stream << "X ";
        }
        else{
            stream << "_ ";
        }

        // Increment loop counter (start)
        start.x++;
        if (start.x >= GRID_SIZE_X){
            start.x = 0;
            start.y++;
            stream << std::endl;
        }
    }
}

// Returns if a point can make a transition from another point
bool canMove(Pair<int>& a, Pair<int>& b){
    return false;
}

// Gives the next movement to get closer from a to b
Pair<int> nextMove(Pair<int>& a, Pair<int>& b){
    return {0,0};
}