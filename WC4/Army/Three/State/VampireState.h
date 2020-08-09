#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "DefaultState.h"

class VampireState : public DefaultState {
<<<<<<< HEAD
=======
protected:
>>>>>>> a52914cb1549e56a60cd0878bcfd17de208b025b
public:
    VampireState(Unit* owner, std::string title, int hp);
    VampireState(Unit* owner, std::string title, int hp, int maxHP);
    ~VampireState();
};


#endif // VAMPIRE_STATE_H