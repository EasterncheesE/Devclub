#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"
#include "../States/MagicState.h"
#include "../Attacks/MagicAttack.h"

class Spellcaster : public Unit {
    protected:
        MagicState* _state;
        MagicAttack* _attack;
    public:
        Spellcaster(std::string title, int hp, int dmg, int mp);
        ~Spellcaster();
        
        int getMP();
        int getManaRegen();
        void addMP(int MP);
        void spendMP(int MP);
        
        void attack(Unit* target);
        void counterattack(Unit* target);
        void castSpell(Unit* target);
        void chooseAction(Unit* target);

};

#endif // SPELLCASTER_H