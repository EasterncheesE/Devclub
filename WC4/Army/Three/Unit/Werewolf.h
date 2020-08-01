#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../States/WerewolfState.h"
#include "../Attacks/WerewolfAttack.h"

class Werewolf : public Unit {
    public:
        Werewolf(std::string title, int hp, int dmg);
        ~Werewolf();
        
        void checkIfDead();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
    
    
};


#endif // WEREWOLF_H