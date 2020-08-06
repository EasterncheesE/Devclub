#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "../State/DefaultMagicState.h"
#include "../Attack/DefaultMagicAttack.h"
#include "Unit.h"
#include "../Spell/Spellbook.h"

class DefaultMagicState;
class DefaultMagicAttack;
class Spellbook;
class DefaultSpell;

class Spellcaster : public Unit {
protected:
    DefaultMagicState* _state;
    DefaultMagicAttack* _attack;
    Spellbook* _spellBook;
    
public:
        Spellcaster(std::string title, int hp, int dmg, int mp);
        virtual ~Spellcaster();
        
        int getMP();
        int getMaxMP();
        int getMPRegen();
        int getMagicDMG();
        
        void addMP(int value);
        void reduceMP(int value);
        void regenMP();
        
        void getSpellList();
        void addSpell(DefaultSpell* spell);
        virtual void chooseAction(Unit* target);
        virtual void castSpell(Unit* target);

        virtual void attack(Unit* target);
        virtual void regularAttack(Unit* target);
        virtual void magicAttack(Unit* target);
        virtual void counterAttack(Unit* target);

        
};

std::ostream& operator<<(std::ostream& out, Spellcaster* spellcaster);
#endif // SPELLCASTER_H