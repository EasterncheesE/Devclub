#include "DefaultMagicState.h"


DefaultMagicState::DefaultMagicState(Spellcaster* owner, int mp) {
    std::cout << "DefaultMagicState constructor" << std::endl;
    this->owner = owner;
    this->mp = mp;
    this->maxMP = mp;
    this->mpRegen = mp / 10;
    this->magicRole = spellcaster;
}
DefaultMagicState::~DefaultMagicState() {}

int DefaultMagicState::getMP() {
    return this->mp;
}
int DefaultMagicState::getMaxMP() {
    return this->maxMP;
}
int DefaultMagicState::getMPRegen() {
    return this->mpRegen;
}
MagicStateRole DefaultMagicState::getMagicRole() {
    return this->magicRole;
}


void DefaultMagicState::addMP(int value) {
    if ( this->mp + value > this->maxMP ) {
        this->mp = maxMP;
    } else {
        this->mp += value;
    }
}
void DefaultMagicState::reduceMP(int value) {
    if ( this->mp < value ) {
        std::cout << "Not enough mana" << std::endl;
        return;
    } else {
        this->mp -= value;
    }
}
void DefaultMagicState::regenMP() {
    if ( this->mp + this->mpRegen > this->maxMP ) {
        this->mp = this->maxMP;
    } else {
        this->mp += this->mpRegen;
    }
}

void DefaultMagicState::setMagicRole(MagicStateRole role) {
    this->magicRole = role;
}