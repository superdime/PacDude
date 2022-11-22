#ifndef ENTITY_H
#define ENTITY_H

#include <ostream>
#include "pair.h"

class Entity{
    public:
    Pair<int> position = Pair<int>(0,0);
    //Rect portion = Rect(0,0,0,0);
    //Rect collider = Rect(0,0,0,0);

    virtual void render(std::ostream& stream) = 0;
    bool collided(Entity& other);
};

struct Rect{
    int x;
    int y;
    int w;
    int h;
    Rect(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}
};

#endif