#ifndef MAGIC_STATE_H
#define MAGIC_STATE_H

#include <iostream>

class MagicState {
    protected:
        int MP;
        int maxMP;
        int manaRegen;
    public:
        MagicState(int mp);
        ~MagicState();
        
        int getMP();
        int getMaxMP();
        int getManaRegen();
        void addMP(int mp);
        void spendMP(int mp);
};



#endif // MAGIC_STATE_H