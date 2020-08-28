#include "Spellcaster.h"

Spellcaster::Spellcaster(std::string title, int hp, int dmg, int mp) : Unit (title, hp, dmg) {
    std::cout << "Spellcaster Constructor" << std::endl;
    this->_state = new DefaultMagicState(this, title, hp, mp);
    this->_attack = new DefaultMagicAttack(this, dmg);
    this->setIsTurnImmune();
    this->_spellBook = new Spellbook(this);
}
Spellcaster::~Spellcaster() {
    std::cout << "Spellcaster destructor" << std::endl;
    delete (this->_state);
    delete (this->_state);
    delete (this->_attack);
    delete (this->_attack);
}

int Spellcaster::getMP() {
    return this->_state->getMP();
}
int Spellcaster::getMaxMP() {
    return this->_state->getMaxMP();
}
int Spellcaster::getMPRegen() {
    return this->_state->getMPRegen();
}

int Spellcaster::getMagicDMG() {
    return this->_attack->getMagicDMG();
}

void Spellcaster::getSpellList() {
    this->_spellBook->getSpellList();
}
void Spellcaster::addSpell(DefaultSpell* spell) {
    this->_spellBook->addSpell(spell);
}

void Spellcaster::addMP(int value) {
    this->_state->addMP(value);
}
void Spellcaster::reduceMP(int value) {
    this->_state->reduceMP(value);
}
void Spellcaster::regenMP() {
    this->_state->regenMP();
}

void Spellcaster::attack(Unit* target) {
    std::cout << "Spellcaster::attack" << std::endl;
    this->chooseAction(target);
}
void Spellcaster::regularAttack(Unit* target) {
    this->_attack->attack(target);
}
void Spellcaster::magicAttack(Unit* target) {
    this->_attack->magicAttack(target);
}

void Spellcaster::counterAttack(Unit* target) {
    this->_attack->counterAttack(target);
}
void Spellcaster::chooseAction(Unit* target) {
    std::cout << "Spellcaster::chooseAction" << std::endl;
    int choice = 0;
    
    std::cout << "Choose 1 for regular attack, 2 for magic attack, 3 for cast spell" << std::endl;
    for ( std::cin >> choice; choice < 1 && choice > 3; )   {
        if ( choice < 1 || choice > 3 ) {
            std::cout << "You must choose 1-3" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cin >> choice;
        }
    }
        if ( choice == 1 ) {
            std::cout << "regular attack is chosen" << std::endl;
            this->regularAttack(target);
        } else if ( choice == 2) {
            std::cout << "magic attack is chosen" << std::endl;
            this->magicAttack(target);
        } else if ( choice == 3 ) {
                std::cout << "spell casting is chosen" << std::endl;
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
    out << ". Spellcaster MP regen: " << spellcaster->getMPRegen();
    out << ". Spellcaster physDMG:" << spellcaster->getPhysDMG();
    out << ". Spellcaster magDMG:" << spellcaster->getMagicDMG() << std::endl;
    out << "Is vampire: " << spellcaster->getIsVampire();
    out << ". Is werewolf: " << spellcaster->getIsWerewolf();
    out << ". Is turn immune: " << spellcaster->getIsTurnImmune();
    out << ". Magic Immune: " << spellcaster->getIsMagicImmune();
    out << ". Is dead: " << spellcaster->checkIfDead() << std::endl;
    return out;
}