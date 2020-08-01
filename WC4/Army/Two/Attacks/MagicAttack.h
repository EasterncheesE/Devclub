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
        
        
        virtual void attack(Unit* target);
        virtual void regularAttack(Unit* target);
        virtual void counterAttack(Unit* target);
        virtual void castSpell(Unit* target);
        virtual void chooseAction(Unit* target);
        
        
        
        
};

#endif // MAGIC_ATTACK_H