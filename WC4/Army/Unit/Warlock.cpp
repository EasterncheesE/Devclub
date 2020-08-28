#include "Warlock.h"


Warlock::Warlock(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    this->_magicState = new WarlockMagicState(this, mp);
    this->_magicAttack = new WarlockMagicAttack(this, dmg);
    this->addSpell(new Fireball(100,150));
    this->addSpell(new Heal(50,100));
    this->addSpell(new SummonDemon(100));
    this->demonList = new std::vector<Demon*>;
}

void Warlock::addDemon() {
    Demon* demon = new Demon("Demon", 500, 50);
    std::cout << "adding demon" << std::endl;
    this->demonList->push_back(demon);
}

void Warlock::getDemonList() {
    std::vector<Demon*>::iterator it = this->demonList->begin();;
    
    for ( int i = 1; it != this->demonList->end(); i++, it++ ) {
        std::cout << "Number: " << i << std::endl;
        std::cout << *it << std::endl;
    }
}


Warlock::~Warlock() {}