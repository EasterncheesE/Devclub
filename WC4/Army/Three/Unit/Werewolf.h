#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../State/WerewolfState.h"
#include "../Attack/WerewolfAttack.h"

class WerewolfState;
class WerewolfAttack;

class Werewolf : public Unit {
protected:
    WerewolfState* _state;
    WerewolfAttack* _attack;
public:
    Werewolf(std::string title, int hp, int dmg);
    ~Werewolf();
    
    bool getIsShapeshifted();
    
    void chooseAction(Unit* target);
    void attack(Unit* target);
    void counterAttack(Unit* target);
    void shapeshift();
    void takeMagicDMG(int value);
};


#endif // WEREWOLF_H