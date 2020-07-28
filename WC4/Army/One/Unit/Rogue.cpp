#include "Rogue.h"

Rogue::Rogue(std::string title) {
    this->Unit = new Unit(title, HP::ROGUE, HP:ROGUE, DMG::ROGUE);
}

Rogue::Rogue(std::string title, int hp, int dmg) {
    this->Unit = new Unit(title, 400, 400, 150);
    
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