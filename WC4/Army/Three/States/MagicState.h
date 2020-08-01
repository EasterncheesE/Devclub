#ifndef MAGIC_STATE_H
#define MAGIC_STATE_H

#include "BaseState.h"

class MagicState : public BaseState {
    protected:
        int MP;
        int maxMP;
        int manaRegen;
    public:
        MagicState(std::string title, int hp, int mp, int maxMP, int manaRegen);
        ~MagicState();
        
    
};


#endif // MAGIC_STATE_H