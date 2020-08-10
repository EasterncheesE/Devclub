#ifndef UNIT_H
#define UNIT_H

#include "../State/DefaultState.h"
#include "../Attack/DefaultAttack.h"
#include "../Interface/Observer.h"
#include "../Interface/Observable.h"

class DefaultState;
class DefaultAttack;

class Unit : public Observer, public Observable {
protected:
        DefaultState* _state;
        DefaultAttack* _attack;
public:
        Unit(std::string title, int hp, int dmg);
        virtual ~Unit();
        
        bool checkIfDead();
        
        std::string getTitle();
        int getHP();
        int getMaxHP();
        bool getIsVampire();
        bool getIsWerewolf();
        bool getIsTurnImmune();
        bool getIsMagicImmune();
        bool getIsShapeshifted();
        bool getIsUndead();
        int getPhysDMG();
        
        virtual void setPhysDMG(int value);
        virtual void setState(DefaultState* state);
        virtual void setAttack(DefaultAttack* attack);
        virtual void setTitle(std::string newTitle);
        virtual void addHP(int value);
        virtual void takePhysDMG(int value);
        virtual void takeMagicDMG(int value);
        virtual void setMaxHP(int vaue);
        virtual void setIsVampire();
        virtual void setIsWerewolf();
        virtual void setIsTurnImmune();
        virtual void setIsMagicImmune();
        virtual void setIsUndead();
        
        virtual void attack(Unit* target);
        virtual void counterAttack(Unit* target);
        virtual void shapeshift();

};

std::ostream& operator<<(std::ostream& out, Unit* unit);
#endif // UNIT_H