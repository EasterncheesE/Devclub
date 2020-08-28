#ifndef UNIT_H
#define UNIT_H

#include "../State/Phys/DefaultPhysState.h"
#include "../Attack/Phys/DefaultPhysAttack.h"
#include "../Interface/Observer.h"
#include "../Interface/Observable.h"
#include "../State/Roles.h"

class DefaultPhysState;
class DefaultPhysAttack;

class Unit : public Observer, public Observable {
protected:
    DefaultPhysState* _state;
    DefaultPhysAttack* _attack;
public:
    Unit(std::string title, int hp, int dmg);
    virtual ~Unit();
    
    virtual bool checkIfDead();
    
    virtual std::string getTitle();
    virtual int getHP();
    virtual int getMaxHP();
    virtual bool getIsUndead();
    virtual int getPhysDMG();
    virtual PhysStateRole getPhysRole();
    
    virtual void setPhysDMG(int value);
    virtual void setState(DefaultPhysState* state);
    virtual void setAttack(DefaultPhysAttack* attack);
    virtual void setTitle(std::string newTitle);
    virtual void addHP(int value);
    virtual void takePhysDMG(int value);
    virtual void takeMagicDMG(int value);
    virtual void setHP(int value);
    virtual void setMaxHP(int value);
    virtual void setIsUndead();
    virtual void setPhysRole(PhysStateRole role);
    
    virtual void attack(Unit* target);
    virtual void counterAttack(Unit* target);
};

std::ostream& operator<<(std::ostream& out, Unit* unit);
#endif // UNIT_H