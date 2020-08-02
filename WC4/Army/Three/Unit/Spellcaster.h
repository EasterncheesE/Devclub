#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "../State/DefaultMagicState.h"
#include "../Attack/DefaultMagicAttack.h"
#include "Unit.h"

class DefaultMagicState;
class DefaultMagicAttack;

class Spellcaster : public Unit {
    protected:
    DefaultMagicState* _magicState;
    DefaultMagicAttack* _magicAttack;
    
    public:
        Spellcaster(std::string title, int hp, int dmg, int mp);
        virtual ~Spellcaster();
        
        int getMP();
        int getMaxMP();
        int getMPRegen();
        
        void addMP(int value);
        void reduceMP(int value);
        void regenMP();
        
        int getMagicDMG();
        virtual void attack(Unit* target);
        virtual void regularAttack(Unit* target);
        virtual void castSpell(Unit* target);
        virtual void counterAttack(Unit* target);
        virtual void chooseAction(Unit* target);
        
};

std::ostream& operator<<(std::ostream& out, Spellcaster* spellcaster);
#endif // SPELLCASTER_H