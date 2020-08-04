#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "../State/DefaultMagicState.h"
#include "../Attack/DefaultMagicAttack.h"
#include "Unit.h"
#include "../Spell/Spellbook.h"
#include "../Spell/Spell.h"

class Spell;
class Spellbook;
class DefaultMagicState;
class DefaultMagicAttack;

class Spellcaster : public Unit {
protected:
    DefaultMagicState* _magicState;
    DefaultMagicAttack* _magicAttack;
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
        void addSpell(Spell* spell);
        
        virtual void attack(Unit* target);
        virtual void regularAttack(Unit* target);
        virtual void castSpell(Unit* target);
        virtual void counterAttack(Unit* target);
        virtual void chooseAction(Unit* target);
        
};

std::ostream& operator<<(std::ostream& out, Spellcaster* spellcaster);
#endif // SPELLCASTER_H