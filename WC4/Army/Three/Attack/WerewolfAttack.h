#ifndef WEREWOLF_ATTACK_H
#define WEREWOLF_ATTACK_H

#include <cstdlib>
#include "DefaultAttack.h"
#include "../Unit/Werewolf.h"

class Unit;

class WerewolfAttack : public DefaultAttack {
public:
    WerewolfAttack(Unit* owner, int dmg);
    ~WerewolfAttack();

    void attack(Unit* target);
    void regularAttack(Unit* target);
    void counterAttack(Unit* target);
    void turnWerewolf(Unit* target);
    void chooseAction(Unit* target);
};
#endif // WEREWOLF_ATTACK_H