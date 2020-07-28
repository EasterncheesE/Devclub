#include "Rogue.h"

Rogue::Rogue(const std::string& name) : Unit(new BaseState(int(HP::ROGUE), int(DMG::ROGUE), name), new RogueAttack()) {}
Rogue::~Rogue() {};

void Rogue::attack(Unit* attacker, Unit* enemy) {
    enemy->takeDamage(attacker->getState().getDmg());
}

void Rogue::counterAttack(Unit* attacker, Unit* enemy) {
    enemy->takeDamage(attacker->getStage().getDmg()/2)
}

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
    out << "Rogue [" << rogue.getUState() << "]";
    return out;
}
