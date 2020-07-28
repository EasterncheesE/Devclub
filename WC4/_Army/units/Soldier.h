#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"

Class Soldier : public Unit {
    public:
        Soldier(const std::string& name);
        ~Soldier();
}

std::ostream& operator<<(std::ostream& out, Soldier& soldier);



#endif // SOLDIER_H