#include <iostream>
#include "./Unit/Rogue.h"
#include "./Unit/Vampire.h"
#include "./Unit/Soldier.h"
#include "./Unit/Necromancer.h"
#include "./Unit/Berserker.h"
#include "./Unit/Werewolf.h"
#include "./Unit/Healer.h"
#include "./Unit/Priest.h"
#include "./Spell/SpellList.h"



int main() {
    srand (time(NULL));
    // Rogue* patrick = new Rogue("Patrick", 5000, 50);
    // Vampire* frank = new Vampire("Frank", 600, 250);
    // Soldier* vasya = new Soldier("Vasya", 1000, 100);
    // Spellcaster* petya = new Spellcaster("Petya", 500, 25, 500);
    Necromancer* fedor = new Necromancer("Fedor", 500, 25, 500);
    Vampire* may = new Vampire("May", 750, 150);
    Berserker* ovald = new Berserker("Ovald", 1000, 100);
    Werewolf* ody = new Werewolf("Ody", 750, 100);
    Healer* healer = new Healer("Healer", 500, 25, 500);
    Priest* priest = new Priest("Priest", 1000, 50, 500);
    
    
    
    
    std::cout << ovald << std::endl;
    std::cout << priest << std::endl;
    
    // fedor->getSpellList();
    // fedor->attack(vasya);
    // fedor->castSpell(fedor);
    
    // for ( ; frank->getHP() > 0; ) {
    //     petya->attack(frank);
    // }
    for ( int i = 1; ovald->getHP() > 0 && ody->getHP() > 0; i++ ) {
        std::cout << std::endl << "CYCLE NUMBER " << i << std::endl;
        ody->attack(ovald);
        std::cout << std::endl;
        ovald->attack(ody);
    }
    
    
    return 0;
}