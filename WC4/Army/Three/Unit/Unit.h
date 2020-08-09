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
        int getPhysDMG();
<<<<<<< HEAD

        void setState(DefaultState* state);
        void setAttack(DefaultAttack* attack);
        void setTitle(std::string newTitle);
        void addHP(int value);
        void takePhysDMG(int value);
        void takeMagicDMG(int value);
        void setMaxHP(int vaue);
        void setIsVampire();
        void setIsWerewolf();
        void setIsTurnImmune();
        void setIsMagicImmune();
=======
        
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
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
        
        virtual void attack(Unit* target);
        virtual void counterAttack(Unit* target);
};

std::ostream& operator<<(std::ostream& out, Unit* unit);
#endif // UNIT_H