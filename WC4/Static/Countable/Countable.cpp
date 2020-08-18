#include "Countable.h"


Countable::Countable() {
    counter += 1;
}
Countable::~Countable() {
    counter -= 1;
}

const int& Countable::getCounter() {
    return counter;
}

int Countable::counter = 0;