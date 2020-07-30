#include "MagicState.h"

MagicState::MagicState(std::string title, int hp, int mp, int maxMP, int manaRegen) : BaseState(title, hp) {
    this->MP = mp;
    this->maxMP = maxMP;
    this->manaRegen = manaRegen;
    this->isSpellcaster = true;
    this->changeStateImmune = true;
}

MagicState::~MagicState() {}