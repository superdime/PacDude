#include <iostream>
#include "pacdude.h"

void PacDude::render(std::ostream& stream){
    stream << "P ";
}

void PacDude::move() {
    char x = '\0';
    std::cin >> x;

    switch (x)
    {
        case 'a':
            nextDirection = Pair<int>(-1,0);
            holdNext = HOLD_DELAY;
            break;

        case 's':
            nextDirection = Pair<int>(0,1);
            holdNext = HOLD_DELAY;
            break;

        case 'd':
            nextDirection = Pair<int>(1,0);
            holdNext = HOLD_DELAY;
            break;

        case 'w':
            nextDirection = Pair<int>(0,-1);
            holdNext = HOLD_DELAY;
            break;

        default:
            if (holdNext > 0){
                holdNext--;
            }
            else {
                nextDirection = curDirection;
            }
            break;
    }
    
    // If can move --> move
    if (true){
        curDirection = nextDirection;
        holdNext = 0;
        position.x += curDirection.x;
        position.y += curDirection.y;
    }
}

Pair<int>& PacDude::getPos(){
    return position;
}