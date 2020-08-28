#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"
#include "../State/Magic/DefaultMagicState.h"
#include "../Attack/Magic/DefaultMagicAttack.h"
#include "../Spell/Spellbook.h"

class DefaultMagicState;
class DefaultMagicAttack;
class Spellbook;
class DefaultSpell;

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
        MagicStateRole getMagicRole();
        
        void addMP(int value);
        void reduceMP(int value);
        void regenMP();
        void setMagicRole(MagicStateRole role);
        
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