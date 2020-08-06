#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../Attack/BerserkerAttack.h"
#include "../State/BerserkerState.h"

class Berserker : public Unit {
public:
        Berserker(std::string title, int hp, int dmg);
        ~Berserker();
        
        
};

#endif // BERSERKER_H