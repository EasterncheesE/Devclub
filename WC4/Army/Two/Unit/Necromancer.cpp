#include "Necromancer.h"


Necromancer::Necromancer(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {}
~Necromancer() {}

void Necromancer::attack(Unit* target) {
    this->owner->addObservable(target);
    target->attach(this);
    this->chooseAction(target);

}
void regularAttack(Unit* target) {
    if ( owner->checkIfDead() ) {
        std::cout << owner->getTitle() << " is dead and cannot attack->" << std::endl;
        this->owner->notifyObservables(target);
        return;
    }
    if ( target->checkIfDead() ) {
        std::cout << target->getTitle() << " is dead and cannot be attacked->" << std::endl;
        target->update(this->owner);
        std::cout << "Target is dead and necromancer is healing" << std::endl;
        return;
    }
    
    std::cout << owner->getTitle() << " is attacking " << target->getTitle() << std::endl;
    target->takeDMG(this->dmg);
    target->counterAttack(this->owner);
}
void Necromancer::counterAttack(Unit* target) {
    std::cout << "Magician counterattack" << std::endl;
}
void Necromancer::castSpell(Unit* target) {}
void Necromancer::chooseAction(Unit* target);