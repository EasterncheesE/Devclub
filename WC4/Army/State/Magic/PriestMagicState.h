#ifndef PRIEST_STATE_H
#define PRIEST_STATE_H

#include "DefaultMagicState.h"

class PriestMagicState : public DefaultMagicState {
public:
    PriestMagicState(Spellcaster* owner, int hp);
    ~PriestMagicState();
};

#endif // PRIEST_STATE_H