#ifndef DEMON_H
#define DEMON_H

#include "../Attack/DemonAttack.h"
#include "../State/DemonState.h"
#include "Soldier.h"

class Demon : public Soldier {
    Demon(std::string title, int hp, int dmg);
    ~Demon();
};
 
#endif // DEMON_H