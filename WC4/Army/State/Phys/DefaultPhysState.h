#ifndef DEFAULT_STATE_H
#define DEFAULT_STATE_H

#include <iostream>
#include "../../Unit/Unit.h"
#include "../Roles.h"

class Unit;



class DefaultPhysState {
protected:
    Unit* owner;
    std::string title;
    int HP;
    int maxHP;
    bool isUndead;
    PhysStateRole physRole;
    
public:
    DefaultPhysState(Unit* owner, std::string title, int hp);
    virtual ~DefaultPhysState();
    
    bool checkIfDead();
    
    virtual Unit* getOwner();
    virtual std::string getTitle();
    virtual int getHP();
    virtual int getMaxHP();
    virtual bool getIsUndead();
    virtual PhysStateRole getPhysRole();

    virtual void setTitle(std::string newTitle);
    virtual void addHP(int value);
    virtual void takePhysDMG(int value);
    virtual void takeMagicDMG(int value);
    virtual void setHP(int value);
    virtual void setMaxHP(int value);
    virtual void setIsUndead();
    virtual void setPhysRole(PhysStateRole physRole);
    virtual void shapeshift();
    
};

#endif // DEFAULT_STATE_H