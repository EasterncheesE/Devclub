#include "Unit.h"

void Unit::ensureIsAlive() {
    if ( this->hitPoints < 1 ) {
        throw UnitIsDead();
    }
}
Unit::Unit(const std::string& name, int hp, int dmg) {
    if (dmg < 0 ) {
        this->damage = 0;
    } else {
        this->damage = dmg;
    }
    if ( hp < 1) {
        this->hitPoints = 1;

    } else {
        this->hitPoints = hp;
    }
    this->name = name;
    this->hitPointsLimit = this->hitPoints;
}
Unit::~Unit() {}

int Unit::getDamage() const {
    return this->damage;
}
int Unit::getHitPoints() const {
    return this->hitPoints;
}
int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}
const std::string& Unit::getName() const {
    return this->name;
}

void Unit::addHitPoints(int hp) {
    try { 
        this->ensureIsAlive();
    } catch ( UnitIsDead obj ) {
        std::cout << this->name <<" is dead. Cannot heal dead unit" << std::endl;
        return; 
    }
    if ( hp < 0 ) {
        std::cout << "added hp value must be positive" << std::endl;
        return;
    }
        if ( this->hitPoints + hp > this->hitPointsLimit ) {
            this->hitPoints = this->hitPointsLimit;
        } else {
            this->hitPoints += hp;
        }
}
void Unit::takeDamage(int dmg) {
    try { 
        this->ensureIsAlive();
    } catch ( UnitIsDead obj ) {
        std::cout << "Unit " << this->name << " is dead, cannot take damage." << std::endl;
        return; 
    }
    if ( dmg < 0 ) {
        std::cout << "Maybe you wanted to heal him instead?" << std::endl;
        return;
    }
    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
        std::cout << "Unit " << this->name << " received " << dmg << " points of damage. Current hp = " << this->hitPoints << "/" << this->hitPointsLimit << ". Unit " << this->name << " is now dead." << std::endl;
    } else {
        this->hitPoints -= dmg;
        std::cout << "Unit " << this->name << " received " << dmg << " points of damage. Current hp = " << this->hitPoints << "/" << this->hitPointsLimit << std::endl; 
    }
}

void Unit::attack(Unit& enemy) {
    try {
        this->ensureIsAlive();
    } catch ( UnitIsDead obj ) {
        std::cout << "Attacker is dead, cannot attack" << std::endl;
        return;
    }
    try {
        enemy.ensureIsAlive();
    } catch ( UnitIsDead obj ) {
        std::cout << "Target is dead, cannot attack" <<std::endl;
        return;
    }
    std::cout << this->name << " tries to attack " << enemy.getName() << std::endl;

    enemy.takeDamage(this->damage);
    enemy.counterAttack(*this);

}

void Unit::counterAttack(Unit& enemy) {
    try {
        this->ensureIsAlive();
    } catch ( UnitIsDead obj ) {
        std::cout << "Counterattacker is dead, cannot attack" << std::endl;
        return;
    }
    std::cout << this->name << " is counterattacking " << enemy.getName() << std::endl;
    enemy.takeDamage(this->damage/2);
}



std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    if ( unit.getHitPoints() > 0 ) {
    out << "Unit name is " << unit.getName() << std::endl << "Unit HP = " << unit.getHitPoints() << "/" << unit.getHitPointsLimit() << std::endl << "Unit damage = " << unit.getDamage();
    } else {
    out << "Unit name is " << unit.getName() << std::endl << "Unit is dead" << std::endl << "Unit damage = " << unit.getDamage();    
    }
    return out;
}
