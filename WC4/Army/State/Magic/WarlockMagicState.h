#ifndef WARLOCK_MAGIC_STATE_H
#define WARLOCK_MAGIC_STATE_H

#include "DefaultMagicState.h"
#include "../../Unit/Warlock.h"

class WarlockMagicState : public DefaultMagicState {
public:
    WarlockMagicState(Spellcaster* owner, int mp);
    ~WarlockMagicState();
};


#endif // WARLOCK_MAGIC_STATE_H