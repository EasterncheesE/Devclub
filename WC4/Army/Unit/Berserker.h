#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../State/Phys/BerserkerPhysState.h"
#include "../Attack/Phys/BerserkerPhysAttack.h"


class Berserker : public Unit {
public:
        Berserker(std::string title, int hp, int dmg);
        ~Berserker();
        
        
};

#endif // BERSERKER_H