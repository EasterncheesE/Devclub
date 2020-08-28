#include <iostream>
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"
#include "./Unit/Soldier.h"
#include "./Unit/Necromancer.h"
#include "./Unit/Berserker.h"
#include "./Unit/Werewolf.h"
#include "./Unit/Healer.h"
#include "./Unit/Priest.h"
#include "./Unit/Warlock.h"
#include "./Spell/SpellList.h"

int main() {
    srand (time(NULL));
    Rogue* rogue = new Rogue("Rogue", 5000, 50);
    Soldier* soldier = new Soldier("Soldier", 1000, 100);
    Spellcaster* spellcaster = new Spellcaster("Spellcaster", 500, 25, 500);
    Necromancer* necromancer = new Necromancer("Necromancer", 500, 25, 500);
    Vampire* vampire = new Vampire("Vampire", 750, 150);
    Berserker* berserk = new Berserker("Berserker", 1000, 100);
    Werewolf* werewolf = new Werewolf("Werewolf", 1000, 100);
    Healer* healer = new Healer("Healer", 1000, 25, 500);
    Priest* priest = new Priest("Priest", 1000, 50, 500);
    Warlock* warlock = new Warlock("Warlock", 1000, 50, 500);
    Demon* demon = new Demon("Demon", 500, 50);
    
    // std::cout << demon << std::endl;
    // std::cout << warlock << std::endl;
    // std::cout << healer << std::endl;
    
    
    // warlock->addDemon();
    // warlock->addDemon();
    // warlock->getDemonList();
    
    for ( ; werewolf->getHP() > 0 && soldier->getHP() > 0; ) {
        werewolf->attack(soldier);
        soldier->attack(werewolf);
    }
    
    
    // fedor->getSpellList();
    // fedor->attack(vasya);
    // fedor->castSpell(fedor);
    
    // for ( ; frank->getHP() > 0; ) {
    //     petya->attack(frank);
    // }
    // for ( int i = 1; healer->getHP() > 0 && ody->getHP() > 0; i++ ) {
    //     std::cout << std::endl << "CYCLE NUMBER " << i << std::endl;
    //     ody->attack(healer);
    //     std::cout << std::endl;
    //     healer->attack(ody);
    // }
    
    
    return 0;
}