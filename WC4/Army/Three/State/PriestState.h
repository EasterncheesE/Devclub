#ifndef PRIEST_STATE_H
#define PRIEST_STATE_H

#include "DefaultMagicState.h"

class PriestState : public DefaultMagicState {
    PriestState(Spellcaster* owner, int hp);
    ~PriestState();
};

#endif // PRIEST_STATE_H