#include "MagicState.h"

MagicState::MagicState(std::string title, int hp, int mp) : BaseState(title, hp) {
    this->MP = mp;
    this->maxMP = mp;
    this->manaRegen = mp/10;
    this->isSpellcaster = true;
    this->changeStateImmune = true;
}

MagicState::~MagicState() {}

int MagicState::getMP() {
    return this->MP;
}
int MagicState::getManaRegen() {
    return this->manaRegen;
}
void MagicState::addMP(int MP) {
    if ( this->MP + MP > this->maxMP ) {
        this->MP = this->maxMP;
    } else {
        this->MP += MP;
    }
}
void MagicState::spendMP(int mp) {
    if ( this->MP + MP > this->maxMP ) {
        std::cout << "Not enough mana" << std::endl
        return;
    } else {
        this->mp -= MP;
    }
}