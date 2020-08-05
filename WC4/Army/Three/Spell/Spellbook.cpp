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
    
    std::cout << "Vector size is " << this->_spellBook->size() << std::endl;
    
    this->getSpellList();
    
    for ( ; choice < 1 || choice > this->_spellBook->size() ; )  {
        std::cout << "please choose from 1 to " << this->_spellBook->size() << std::endl;
        std::cin >> choice;
    }
    it = std::next(this->_spellBook->begin(), choice-1);
    tempSpell = *it;
    
    std::cout << "Selected:" << tempSpell << std::endl;
    tempSpell->useSpell(this->owner, target);
}