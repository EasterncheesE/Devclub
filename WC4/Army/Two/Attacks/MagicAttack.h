#ifndef MAGIC_ATTACK_H
#define MAGIC_ATTACK_H

#include <iostream>
#include "../States/MagicState.h"
#include "../Unit/Spellcaster.h"

class Spellcaster;

class MagicAttack {
    protected:
        Spellcaster* owner;
        int dmg;
    public:
        MagicAttack(Spellcaster* owner, int dmg);
        ~MagicAttack();
        
        
        void attack(Unit* target);
        void regularAttack(Unit* target);
        void counterAttack(Unit* target);
        void castSpell(Unit* target);
        void chooseAction(Unit* target);
        
        
        
        
};

#endif // MAGIC_ATTACK_H