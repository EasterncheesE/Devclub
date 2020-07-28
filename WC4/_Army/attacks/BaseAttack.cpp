#include "BaseAttack.h"

BaseAttack::BaseAttack(int dmg) {
    this->baseAttack = dmg;
}

BaseAttack::~BaseAttack();

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
    enemy->takeDamage(attacker->getState().getDmg());
}

void BaseAttack::counterAttack(Unit* attacker, Unit* enemy) {
    enemy->takeDamage(attacker->getStage().getDmg()/2)
}