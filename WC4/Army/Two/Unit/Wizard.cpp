#include "Wizard.h"

 Wizard::Wizard(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg) {}
    Wizard::~Wizard() {}
    
        int Wizard::getMP() {
            return this->_state->getMP();
        }
        int Wizard::getManaRegen() {
            return thos->_state->getManaRegen();
        }
        void Wizard::addMP(int MP) {
            this->_state->addMP(MP);
        }
        void Wizard::spendMP(int MP) {
            this->_state->spendMP(MP);
        }
    
    void Wizard::attack(Unit* target) {
        this->_attack->attack(target);
    }
    void Wizard::counterAttack(Unit* target) {
        this->_attack->counterAttack(target);
    }
    
    void Wizard::castSpell(Unit* target) {
        std::cout << this->owner->getTitle() <<" is casting spell" << std::endl;
    }
    
    void Wizard::chooseAction(Unit* target) {
        this->_attack->chooseAction(target);
    }