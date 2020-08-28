#ifndef DEFAULT_STATE_H
#define DEFAULT_STATE_H

#include <iostream>
#include "../Unit/Unit.h"

class Unit;

class DefaultState {
protected:
        Unit* owner;
        std::string title;
        int HP;
        int maxHP;
        bool isVampire;
        bool isWerewolf;
        bool isTurnImmune;
        bool isMagicImmune;
        
public:
        DefaultState(Unit* owner, std::string title, int hp);
        virtual ~DefaultState();
        
        bool checkIfDead();
        
        virtual Unit* getOwner();
        virtual std::string getTitle();
        virtual int getHP();
        virtual int getMaxHP();
        virtual bool getIsVampire();
        virtual bool getIsWerewolf();
        virtual bool getIsTurnImmune();
        virtual bool getIsMagicImmune();

        virtual void setTitle(std::string newTitle);
        virtual void addHP(int value);
        virtual void takePhysDMG(int value);
        virtual void takeMagicDMG(int value);
        virtual void setHP(int value);
        virtual void setMaxHP(int value);
        virtual void setIsVampire();
        virtual void setIsWerewolf();
        virtual void setIsTurnImmune();
        virtual void setIsMagicImmune();
        
        
};

#endif // DEFAULT_STATE_H