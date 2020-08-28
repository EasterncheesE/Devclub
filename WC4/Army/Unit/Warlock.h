#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include <vector>
#include "Spellcaster.h"
#include "Demon.h"
#include "../State/Magic/WarlockMagicState.h"
#include "../Attack/Magic/WarlockMagicAttack.h"
#include "../Spell/SpellList.h"

class Warlock : public Spellcaster {
protected:
    std::vector<Demon*>* demonList;
public:
    Warlock(std::string title, int hp, int dmg, int mp);
    ~Warlock();
    
    void addDemon();
    void getDemonList();
};


#endif // WARLOCK_H