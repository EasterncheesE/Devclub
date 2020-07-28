#include "Rogue.h"

Rogue::Rogue(std::string title) {
    this->_state = new BaseState(title, HP::ROGUE, HP::ROGUE);
    this->_attack = new RogueAttack(DMG::ROGUE);
}

Rogue::Rogue(std::string title, int hp, int dmg) {
    this->_state = new BaseState(title, hp);
    this->_attack = new RogueAttack(this, dmg);
    
}
Rogue::~Rogue() {
    delete(this->_state);
    delete(this->_attack);
}

void Rogue::attack(Unit* target) {
        if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot attack." << std::endl;
        return;
    }
    if ( target.checkIfDead() ) {
        std::cout << target.getTitle() << " is dead and cannot be attacked." << std::endl;
        return;
    }
    std::cout << owner->getTitle() << " is attacking " << target.getTitle() << std::endl;
    target.takeDMG(this->_attack_getPhysDMG);
}