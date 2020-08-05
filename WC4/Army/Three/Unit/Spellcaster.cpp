#include "Spellcaster.h"

Spellcaster::Spellcaster(std::string title, int hp, int dmg, int mp) : Unit (title, hp, dmg) {
    std::cout << "Spellcaster Constructor" << std::endl;
    this->_magicState = new DefaultMagicState(this, mp);
    this->_magicAttack = new DefaultMagicAttack(this, dmg*2);
    this->setIsTurnImmune();
    this->_spellBook = new Spellbook(this);
}
Spellcaster::~Spellcaster() {
    std::cout << "Spellcaster destructor" << std::endl;
    delete (this->_state);
    delete (this->_magicState);
    delete (this->_attack);
    delete (this->_magicAttack);
}

int Spellcaster::getMP() {
    return this->_magicState->getMP();
}
int Spellcaster::getMaxMP() {
    return this->_magicState->getMaxMP();
}
int Spellcaster::getMPRegen() {
    return this->_magicState->getMPRegen();
}

int Spellcaster::getMagicDMG() {
    return this->_magicAttack->getMagicDMG();
}

void Spellcaster::getSpellList() {
    this->_spellBook->getSpellList();
}
void Spellcaster::addSpell(DefaultSpell* spell) {
    this->_spellBook->addSpell(spell);
}

void Spellcaster::addMP(int value) {
    this->_magicState->addMP(value);
}
void Spellcaster::reduceMP(int value) {
    this->_magicState->reduceMP(value);
}
void Spellcaster::regenMP() {
    this->_magicState->regenMP();
}

void Spellcaster::attack(Unit* target) {
    this->chooseAction(target);
}
void Spellcaster::regularAttack(Unit* target) {
    this->_attack->attack(target);
}
void Spellcaster::magicAttack(Unit* target) {
    this->_magicAttack->magicAttack(target);
}

void Spellcaster::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}
void Spellcaster::chooseAction(Unit* target) {
    int choice = 0;
       
    std::cout << "1 for regular attack, 2 for magic attack, 3 for cast spell" << std::endl;
    for ( std::cin >> choice; choice < 1 && choice > 3; std::cin >> choice) {
        std::cout << "You must choose 1-3" << std::endl;
    }
    
    if ( choice == 1 ) {
        this->regularAttack(target);
    } else if ( choice == 2) {
        this->magicAttack(target);
    } else {
        this->_spellBook->chooseSpell(target);
    }
}

void Spellcaster::castSpell(Unit* target) {
    this->_spellBook->chooseSpell(target);
    
}

std::ostream& operator<<(std::ostream& out, Spellcaster* spellcaster) {
    out << "Spellcaster name: " << spellcaster->getTitle();
    out << ". Spellcaster HP: " << spellcaster->getHP() << "/" << spellcaster->getMaxHP();
    out << ". Spellcaster MP: " << spellcaster->getMP() << "/" << spellcaster->getMaxMP();
    out << ". Spellcaster physDMG:" << spellcaster->getDMG();
    out << ". Spellcaster magDMG:" << spellcaster->getMagicDMG() << std::endl;
    out << "Is vampire: " << spellcaster->getIsVampire();
    out << ". Is werewolf: " << spellcaster->getIsWerewolf();
    out << ". Is turn immune: " << spellcaster->getIsTurnImmune();
    out << ". Magic Immune: " << spellcaster->getIsMagicImmune();
    out << ". Is dead: " << spellcaster->checkIfDead() << std::endl;
    return out;
}