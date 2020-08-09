#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../State/WerewolfState.h"
#include "../Attack/WerewolfAttack.h"

class WerewolfState;
class WerewolfAttack;

class Werewolf : public Unit {
<<<<<<< HEAD
=======
protected:
    WerewolfState* _state;
    WerewolfAttack* _attack;
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
public:
    Werewolf(std::string title, int hp, int dmg);
    ~Werewolf();
    
<<<<<<< HEAD
    void attack(Unit* target);
    void counterAttack(Unit* target);
=======
    bool getIsShapeshifted();
    
    void chooseAction(Unit* target);
    void attack(Unit* target);
    void counterAttack(Unit* target);
    void shapeshift();
    void takeMagicDMG(int value);
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
};


#endif // WEREWOLF_H