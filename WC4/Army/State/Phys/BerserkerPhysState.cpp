#include "BerserkerPhysState.h"

BerserkerPhysState::BerserkerPhysState(Unit* owner, std::string title, int hp) : DefaultPhysState(owner, title, hp) {
    this->physRole = berserker;
    this->isUndead = false;
}
BerserkerPhysState::~BerserkerPhysState() {}

void BerserkerPhysState::takeMagicDMG(int value) {
    std::cout << "BerserkerPhysState::takeMagicDMG" << std::endl;
    if ( this->checkIfDead() ) {
        std::cout << "You cannot damage dead unit" << std::endl;
        return;
    }
    std::cout << "Berserkers are immune to magic, no damage is taken" << std::endl;
    
}