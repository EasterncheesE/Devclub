#ifndef DEFAULT_MAGIC_STATE_H
#define DEFAULT_MAGIC_STATE_H

#include "../../Unit/Spellcaster.h"
#include "../Roles.h"

class Spellcaster;

class DefaultMagicState {
protected:
    Spellcaster* owner;
    int mp;
    int maxMP;
    int mpRegen;
    MagicStateRole magicRole;
public:
    DefaultMagicState(Spellcaster* owner, int mp);
    virtual ~DefaultMagicState();
    
    int getMP();
    int getMaxMP();
    int getMPRegen();
    MagicStateRole getMagicRole();
    
    void addMP(int value);
    void reduceMP(int value);
    void regenMP();
    void setMagicRole(MagicStateRole role);
    
};


#endif // DEFAULT_MAGIC_STATE_H