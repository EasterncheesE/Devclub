#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"
#include "../States/MagicState.h"
#include "../Attacks/MagicAttack.h"

class MagicAttack;

class Spellcaster : public Unit {
    protected:
        MagicState* _magicState;
        MagicAttack* _magicAttack;
    public:
        Spellcaster(std::string title, int hp, int dmg, int mp);
        ~Spellcaster();
        
        int getMP();
        int getMaxMP();
        int getManaRegen();
        void addMP(int MP);
        void spendMP(int MP);
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
        void castSpell(Unit* target);
        void chooseAction(Unit* target);

};

std::ostream& operator<<(std::ostream& out, Spellcaster& spellcaster);

#endif // SPELLCASTER_H