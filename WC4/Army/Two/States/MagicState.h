#ifndef MAGIC_STATE_H
#define MAGIC_STATE_H

#include "BaseState.h"

class MagicState : public BaseState {
    protected:
        int MP;
        int maxMP;
        int manaRegen;
    public:
        MagicState(std::string title, int hp, int mp);
        ~MagicState();
        
        int getMP();
        int getManaRegen();
        void addMP(int MP);
        void spendMP(int MP);
};


#endif // MAGIC_STATE_H