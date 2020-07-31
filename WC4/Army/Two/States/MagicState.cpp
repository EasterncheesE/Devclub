#include "MagicState.h"

MagicState::MagicState(int mp) {
    this->MP = mp;
    this->maxMP = mp;
    this->manaRegen = mp/10;
}

MagicState::~MagicState() {}

int MagicState::getMP() {
    return this->MP;
}
int MagicState::getMaxMP() {
    return this->maxMP;
}
int MagicState::getManaRegen() {
    return this->manaRegen;
}

void MagicState::addMP(int mp) {
    if ( this->MP + mp > this->maxMP ) {
        this->MP = this->maxMP;
    } else {
        this->MP += mp;
    }
}
void MagicState::spendMP(int mp) {
    if ( mp > this->MP ) {
        std::cout << "Not enough mana" << std::endl;
        return;
    } else {
        this->MP -= mp;
    }
}