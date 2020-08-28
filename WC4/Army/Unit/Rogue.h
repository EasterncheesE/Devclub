#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "../Attack/Phys/RoguePhysAttack.h"
#include "../State/Phys/RoguePhysState.h"

class Rogue : public Unit {
public:
        Rogue(std::string title, int hp, int dmg);
        ~Rogue();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};


#endif // ROGUE_H