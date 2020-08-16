#ifndef DEMON_H
#define DEMON_H

#include "Soldier.h"
#include "../State/Phys/DemonPhysState.h"
#include "../Attack/Phys/DemonPhysAttack.h"


class Demon : public Soldier {
public:
    Demon(std::string title, int hp, int dmg);
    ~Demon();
};
 
#endif // DEMON_H