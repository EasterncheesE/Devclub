#ifndef MAGIC_ATTACK_H
#define MAGIC_ATTACK_H

#include <iostream>
#include "BaseAttack.h"
#include "../States/MagicState.h"
#include "../Unit/Spellcaster.h"
#include "../Unit/Wizard.h"


class MagicAttack : public BaseAttack {
    public:
        MagicAttack(Spellcaster* owner, int dmg);
        ~MagicAttack();
        
        
        void attack(Unit* target);
        void castSpell(Unit* target);
        void counterattack(Unit* target);
        void chooseAction(Unit* target);
        
        
        
        
};

#endif // MAGIC_ATTACK_H