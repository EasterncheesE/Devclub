#ifndef WIZARD_H
#define WIZARD_H

#include "Spellcaster.h"
#include "../States/MagicState.h"
#include "../Attacks/MagicAttack.h"

class Wizard : public Spellcaster {
    public:
        Wizard(std::string title, int hp, int dmg, int mp);
        ~Wizard();
        
        int getMP();
        int getManaRegen();
        void addMP(int MP);
        void spendMP(int MP);
        
        void attack(Unit* target);
        void counterattack(Unit* target);
        void castSpell(Unit* target);
        void chooseAction(Unit* target);
        

};

#endif // WIZARD_H