#ifndef DEFAULT_MAGIC_STATE_H
#define DEFAULT_MAGIC_STATE_H

#include "../Unit/Spellcaster.h"

class Spellcaster;

class DefaultMagicState {
protected:
        Spellcaster* owner;
        int mp;
        int maxMP;
        int mpRegen;
public:
        DefaultMagicState(Spellcaster* owner, int mp);
        virtual ~DefaultMagicState();
        
        int getMP();
        int getMaxMP();
        int getMPRegen();
        
        void addMP(int value);
        void reduceMP(int value);
        void regenMP();
        
};


#endif // DEFAULT_MAGIC_STATE_H