#ifndef WEREWOLF_ATTACK_H
#define WEREWOLF_ATTACK_H

#include <cstdlib>
#include "DefaultPhysAttack.h"
#include "../../State/Phys/WerewolfPhysState.h"
#include "../../Unit/Werewolf.h"

class Unit;

class WerewolfPhysAttack : public DefaultPhysAttack {
public:
    WerewolfPhysAttack(Unit* owner, int dmg);
    ~WerewolfPhysAttack();

    void attack(Unit* target);
    void regularAttack(Unit* target);
    void counterAttack(Unit* target);
    void turnWerewolf(Unit* target);
    void chooseAction(Unit* target);
    void shapeshift();
};
#endif // WEREWOLF_ATTACK_H