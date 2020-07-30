#include "MagicAttack.h"

        MagicAttack::MagicAttack(Spellcaster* owner, int dmg) : BaseAttack(owner, dmg) {}
        MagicAttack::~MagicAttack() {}
        
        
        void MagicAttack::attack(Unit* target) {
            this->BaseAttack::attack(target);
        }
        
        void MagicAttack::castSpell(Unit* target) {
            std::cout << "Casting spell" << std::endl;
        }
        void MagicAttack::counterattack(Unit* target) {}
        void MagicAttack::chooseAction(Unit* target) {
            int choice;
            
            std::cout << "Type 1 for regular attack, type 2 to cast spell." << std::endl;
            for ( ; choice != 1 || choice != 2; ) {
                std::cin >> choice;
                if ( choice != 1 || choice != 2 ) {
                    std::cout << "You must choose 1 or 2" << std::endl;
                }
            }
            if ( choice == 1 ) {
                std::cout << "Regular attack chosen." << std::endl;
                this->owner->Spellcaster::addMP(this->owner->getManaRegen());
                this->BaseAttack::attack(target);
            } else {
                std::cout << "cast spell chosen." << std::endl; 
                this->owner->castSpell(target);
            }
        }