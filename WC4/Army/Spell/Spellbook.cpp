#include "Spellbook.h"
#include "Heal.h"
#include "Fireball.h"


Spellbook::Spellbook(Spellcaster* owner) {
    this->owner = owner;
    this->_spellBook = new std::vector<DefaultSpell*>;
}
Spellbook::~Spellbook() {
    delete (this->_spellBook);
}

void Spellbook::getSpellList() {
    std::vector<DefaultSpell*>::iterator it = this->_spellBook->begin();;
    
    for ( int i = 1; it != this->_spellBook->end(); i++, it++ ) {
        std::cout << "Number: " << i << std::endl;
        std::cout << *it << std::endl;
    }
}

void Spellbook::addSpell(DefaultSpell* spell) {
    this->_spellBook->push_back(spell);
}

void Spellbook::chooseSpell(Unit* target) {
    int choice = 0;
    DefaultSpell* tempSpell;
    std::vector<DefaultSpell*>::iterator it;
    
    std::cout << std::endl << "Mana remaining: " << this->owner->getMP() << "/" << this->owner->getMaxMP() << std::endl;
    
    std::cout << "Please type spell number to cast." << std::endl << std::endl;
    this->getSpellList();
    
    for ( std::cin >> choice; choice < 1 || choice > this->_spellBook->size() ; )  {
        std::cout << "please choose from 1 to " << this->_spellBook->size() << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cin >> choice;
    }
    it = std::next(this->_spellBook->begin(), choice-1);
    tempSpell = *it;
    
    std::cout << "Selected:" << tempSpell << std::endl;
    if (this->owner->getMP() < tempSpell->getManaCost() ) {
        std::cout << "not enough mana to cast " << tempSpell->getSpellName() << std::endl;
        this->owner->chooseAction(target);
    } else {
    tempSpell->useSpell(this->owner, target);
    }
}