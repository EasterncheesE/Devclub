#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "DefaultState.h"

class WerewolfState : public DefaultState {
protected:
    bool isShapeshifted;
public:
    WerewolfState(Unit* owner, std::string title, int hp);
    WerewolfState(Unit* owner, std::string title, int hp, int maxHP);
    ~WerewolfState();
    
    
    bool getIsShapeshifted();
    void shapeshift();
    void takeMagicDMG(int value);
};

#endif // WEREWOLF_STATE_H