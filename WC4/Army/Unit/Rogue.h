#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "Unit.h"
#include "../States/RogueState.h"
#include "../Attacks/RogueAttack.h"

class RogueState;
class RogueAttack;

class Rogue : virtual public Unit {
    protected:
        BaseState* _state;
        RogueAttack* _attack;
    public:
        Rogue(std::string title);
        Rogue(std::string title, int HP, int DMG);
        virtual ~Rogue();
        
        void attack(Unit* target);
};


#endif // ROGUE_H