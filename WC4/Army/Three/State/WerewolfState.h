#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "DefaultState.h"

class WerewolfState : public DefaultState {
<<<<<<< HEAD
=======
protected:
    bool isShapeshifted;
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
public:
    WerewolfState(Unit* owner, std::string title, int hp);
    WerewolfState(Unit* owner, std::string title, int hp, int maxHP);
    ~WerewolfState();
<<<<<<< HEAD
=======
    
    
    bool getIsShapeshifted();
    void shapeshift();
    void takeMagicDMG(int value);
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
};

#endif // WEREWOLF_STATE_H