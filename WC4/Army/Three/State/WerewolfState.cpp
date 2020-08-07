#include "WerewolfState.h"

WerewolfState::WerewolfState(Unit* owner, std::string title, int hp) : DefaultState(owner, title, hp) {
    this->isWerewolf = true;
    this->isTurnImmune = true;
}
WerewolfState::WerewolfState(Unit* owner, std::string title, int hp, int maxHP) : DefaultState(owner, title, hp) {
    this->maxHP = maxHP;
    this->isWerewolf = true;
    this->isTurnImmune = true;
}
WerewolfState::~WerewolfState() {}


bool WerewolfState::getIsShapeshifted() {
    return this->isShapeshifted;
}

void WerewolfState::shapeshift() {
    std::cout << "HP was " << this->HP << "/" << this->maxHP << ". PhysDMG was " << this->owner->getPhysDMG() << std::endl;
    if ( this->isShapeshifted ) {
        this->HP /= 2;
        this->maxHP /= 2;
        this->owner->setPhysDMG(this->owner->getPhysDMG() / 2);
    } else {
        this->maxHP *= 2;
        this->HP *= 2;
        this->owner->setPhysDMG(this->owner->getPhysDMG() * 2);
    }
    std::cout << "HP now " << this->HP << "/" << this->maxHP << ". PhysDMG now " << this->owner->getPhysDMG() << std::endl;
    this->isShapeshifted = !(this->isShapeshifted);
}

void WerewolfState::takeMagicDMG(int value) {
    std::cout << "WerewolfState::takeMagicDMG" << std::endl;
    if ( this->isShapeshifted) {
        value *= 2;
    }
    if ( this->checkIfDead() ) {
        std::cout << "You cannot damage dead unit" << std::endl;
        return;
    } else {
        if ( this->isMagicImmune ) {
            std::cout << "Unit is immune to magic and cannot be damaged by magic" << std::endl;
            return;
        }
        if ( this->HP <= value ) {
            std::cout << "Unit " << this->title << " was damaged for " << this->HP << " HP. He is dead now, notifying." << std::endl;
            this->HP = 0;
            this->owner->notifyObservables();
            this->owner->notifyObservers();
        } else {
            this->HP -= value;
            std::cout << "Unit " << this->title << " was damaged for " << value << " HP. HP left: " << this->HP << "/" << this->maxHP << std::endl;
        }
    }
}