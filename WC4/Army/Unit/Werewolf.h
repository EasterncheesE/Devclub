#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../State/Phys/WerewolfPhysState.h"
#include "../Attack/Phys/WerewolfPhysAttack.h"

class WerewolfPhysState;
class WerewolfPhysAttack;

class Werewolf : public Unit {
public:
    Werewolf(std::string title, int hp, int dmg);
    ~Werewolf();
    
    PhysStateRole getPhysRole();
    void attack(Unit* target);
    void counterAttack(Unit* target);
    void takeMagicDMG(int value);
};

#endif // WEREWOLF_H