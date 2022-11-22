#include <iostream>
#include "class/grid.h"
#include "class/pacdude.h"

using namespace std;

int main(){
    Grid grid;
    PacDude dude;
    dude.position = Pair<int>(1,1);
    
    while(true){
        auto pos = dude.getPos();
        grid.render(cout, Pair<int>(0,0), pos);
        dude.render(cout);
        grid.render(cout, Pair<int>(pos.x + 1, pos.y));
        dude.move();
    }
}