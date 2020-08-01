#ifndef WEREWOLF_ATTACK_H
#define WEREWOLF_ATTACK_H

#include <cstdlib>
#include "BaseAttack.h"
#include "../Unit/Werewolf.h"

class WerewolfAttack : public BaseAttack {
    public:
        WerewolfAttack(Unit* owner, int dmg);
        ~WerewolfAttack();
        
        void attack(Unit* target);
        void counterAttack(Unit* target);
};

#endif // WEREWOLF_ATTACK_H


///stesfd