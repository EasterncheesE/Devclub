#ifndef DEFAULT_MAGIC_STATE_H
#define DEFAULT_MAGIC_STATE_H

#include "../Unit/Spellcaster.h"
#include "../State/DefaultState.h"

class Spellcaster;

class DefaultMagicState : public DefaultState {
protected:
        Spellcaster* owner;
        int mp;
        int maxMP;
        int mpRegen;
public:
        DefaultMagicState(Spellcaster* owner, std::string title, int hp, int mp);
        virtual ~DefaultMagicState();
        
        int getMP();
        int getMaxMP();
        int getMPRegen();
        
        void addMP(int value);
        void reduceMP(int value);
        void regenMP();
        
};


#endif // DEFAULT_MAGIC_STATE_H