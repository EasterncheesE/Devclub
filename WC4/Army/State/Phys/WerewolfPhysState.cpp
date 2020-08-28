#include "WerewolfPhysState.h"

WerewolfPhysState::WerewolfPhysState(Werewolf* owner, std::string title, int hp) : DefaultPhysState(owner, title, hp) {
    this->physRole = werewolf;
    this->isUndead = false;
}
WerewolfPhysState::WerewolfPhysState(Unit* owner, std::string title, int hp, int maxHP) : DefaultPhysState(owner, title, hp) {
    this->maxHP = maxHP;
    this->physRole = werewolf;
    this->isUndead = false;
}
WerewolfPhysState::~WerewolfPhysState() {}

void WerewolfPhysState::takeMagicDMG(int value) {
    std::cout << "WerewolfPhysState::takeMagicDMG" << std::endl;
    if ( this->checkIfDead() ) {
        std::cout << "You cannot damage dead unit" << std::endl;
        return;
    }
    if ( this->physRole == wolf ) {
        std::cout << "Incoming damage " << value << std::endl;
        value *= 2;
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