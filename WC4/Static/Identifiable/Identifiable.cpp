#include "Identifiable.h"

Identifiable::Identifiable() {
    idCounter += 1;
    counter += 1;
    this->id = idCounter;
}

Identifiable::~Identifiable() {
    idCounter -= 1;
    counter -= 1;
}

const int& Identifiable::getCounter() {
    return counter;
}
const int& Identifiable::getIdCounter() {
    return idCounter;
}
int Identifiable::getId() {
    return this->id;
}


int Identifiable::counter = 0;
int Identifiable::idCounter = 0;