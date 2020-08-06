#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"
#include "../Attacks/RogueAttack.h"

class Rogue : public Unit {
    public:
        Rogue(std::string title, int hp, int dmg);
        ~Rogue();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // ROGUE_H