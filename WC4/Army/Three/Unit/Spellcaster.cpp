#include "Spellcaster.h"

Spellcaster::Spellcaster(std::string title, int hp, int dmg, int mp) : Unit (title, hp, dmg) {
    std::cout << "Spellcaster Constructor" << std::endl;
    this->_magicState = new DefaultMagicState(this, mp);
    this->_magicAttack = new DefaultMagicAttack(this, dmg);
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
MagicStateRole Spellcaster::getMagicRole() {
    return this->_magicState->getMagicRole();
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
void Spellcaster::setMagicRole(MagicStateRole role) {
    this->_magicState->setMagicRole(role);
}

void Spellcaster::attack(Unit* target) {
    std::cout << "Spellcaster::attack" << std::endl;
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
    std::cout << "Spellcaster::chooseAction" << std::endl;
    int choice = 0;
    
    std::cout << "Choose 1 for regular attack, 2 for magic attack, 3 for cast spell" << std::endl;
    for ( std::cin >> choice; choice < 1 || choice > 3; )   {
        if ( choice < 1 || choice > 3 ) {
            std::cout << "You must choose 1-3" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cin >> choice;
        }
    }
    
    if ( choice == 1 ) {
        std::cout << "regular attack is chosen" << std::endl;
        this->_attack->attack(target);
    } else if ( choice == 2) {
        std::cout << "magic attack is chosen" << std::endl;
        this->_magicAttack->magicAttack(target);
    } else if ( choice == 3 ) {
        std::cout << "spell casting is chosen" << std::endl;
        this->castSpell(target);
    }
}
void Spellcaster::castSpell(Unit* target) {
    this->_spellBook->chooseSpell(target);
    
}

std::ostream& operator<<(std::ostream& out, Spellcaster* spellcaster) {
    out << "Spellcaster name: " << spellcaster->getTitle();
    out << ". Spellcaster HP: " << spellcaster->getHP() << "/" << spellcaster->getMaxHP();
    out << ". Spellcaster MP: " << spellcaster->getMP() << "/" << spellcaster->getMaxMP();
    out << ". Spellcaster MP regen: " << spellcaster->getMPRegen();
    out << ". Spellcaster physDMG:" << spellcaster->getPhysDMG();
    out << ". Spellcaster magDMG:" << spellcaster->getMagicDMG() << std::endl;
    out << "Role: " << spellcaster->getPhysRole() << "/" << spellcaster->getMagicRole();
    out << ". Is dead: " << spellcaster->checkIfDead() << std::endl;
    return out;
}