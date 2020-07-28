#ifndef ROGUE_STATE_H
#define ROGUE_STATE_H

#include <BaseState.h>

class RogueState : public BaseState {
    RogueState(std::string title);
    RogueState(std::string title, int hp, int dmg);
    ~RogueState();
    
}


#endif // ROGUE_STATE_H