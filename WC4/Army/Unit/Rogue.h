#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "Unit.h"

class Rogue : public Unit {
    protected:
        RogueState* _state;
        RogueAttack* _attack;
    public:
        Rogue(std::string title);
        Rogue(std::string title, int HP, int DMG);
        virtual ~Rogue();
        
        void attack(Unit* target);
        void counterattack(Unit* target);
};


#endif // ROGUE_H