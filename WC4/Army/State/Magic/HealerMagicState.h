#ifndef HEALER_STATE_H
#define HEALER_STATE_H

#include "DefaultMagicState.h"

class HealerMagicState : public DefaultMagicState {
public:
    HealerMagicState(Spellcaster* owner, int mp);
    ~HealerMagicState();
};

#endif // HEALER_STATE_H