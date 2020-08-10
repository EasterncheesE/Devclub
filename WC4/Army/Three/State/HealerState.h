#ifndef HEALER_STATE_H
#define HEALER_STATE_H

#include "DefaultMagicState.h"

class HealerState : public DefaultMagicState {
public:
    HealerState(Spellcaster* owner, int mp);
    ~HealerState();
};

#endif // HEALER_STATE_H