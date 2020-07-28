#include "Soldier.h"

Soldier::Soldier(const std::string& name) : Unit(new BaseState(int(HP::SOLDIER), int(DMG::SOLDIER), name), new BaseAttack(),) {
    
}

Soldier::~Soldier() {
    
}

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
    out << "Soldier [" << soldier.getUState() << "]";
    return out;
}
