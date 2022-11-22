#ifndef PACDUDE_H
#define PACDUDE_H

#include "character.h"

const int HOLD_DELAY = 5;

class PacDude : public Character{
    public:
    PacDude() = default;
    void render(std::ostream& stream) override;
    void move() override;
    Pair<int>& getPos();
};

#endif