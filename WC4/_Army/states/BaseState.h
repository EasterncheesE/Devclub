#ifndef BASESTATE_H
#define BASESTATE_H

#include <iostream>
#include "../setup.h"

class BaseState {
    private:
        int hp;
        int maxHp;
        int dmg;
        std::string* name;
        
    public:
        BaseState(int health, int damage, const std::string& name);
        virtual ~BaseState();
        
        bool isDead();
        void checkMinMax();
        
        int getHp() const;
        int getMaxHp() const;
        int getDmg() const;
        const std::string& getName() const; //Возврат ссылки, а ссылка всегда константная.
        
        void takeDamage(int dmg);

};

std::ostream& operator<<(std::ostream& out, BaseState& state);


#endif //BASESTATE_H