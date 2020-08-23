#include "AriProgIter.h"

AriProgIter::AriProgIter(int start, int step, int repeats) : current(start), step(step), repeats(repeats), counter(0) {}
AriProgIter::~AriProgIter() {}

int AriProgIter::getCurrent() {
    return this->current;
}

void AriProgIter::next() {
    if ( !(this->end()) ) {
        this->current += this->step;
        this->counter += 1;
    }
}

bool AriProgIter::end() {
    return (this->counter >= this->repeats);
}

void AriProgIter::operator++() {
    this->next();
}
void AriProgIter::operator++(int) {
    this->next();
}

std::ostream& operator<<(std::ostream& out, AriProgIter& iterator) {
    out << iterator.getCurrent();
    return out;
}