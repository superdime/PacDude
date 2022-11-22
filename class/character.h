#ifndef CHARACTER_H
#define CHARACTER_H

#include "entity.h"
#include "pair.h"

class Character : public Entity{
    public:
    //PLAYER human = PLAYER_CPU;
    Pair<int> curDirection = Pair<int>(0,0);
    Pair<int> nextDirection = Pair<int>(0,0);
    int holdNext = 0;

    virtual void move() = 0;
};

enum PLAYER : int{
    PLAYER_CPU = 0,
    PLAYER_PLAYER1,
    PLAYER_PLAYER2,
    PLAYER_PLAYER3,
    PLAYER_PLAYER4
};

#endif