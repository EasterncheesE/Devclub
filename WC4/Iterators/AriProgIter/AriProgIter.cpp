#include "AriProgIter.h"

AriProgIter::AriProgIter(int start, int step, int limit) : current(start), step(step), limit(limit), counter(0) {}
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
    return (this->counter >= this->limit);
}

void AriProgIter::operator++() {
    this->next();
}
void AriProgIter::operator++(int) {
    this->next();
}

int AriProgIter::operator*() {
    return this->getCurrent();
}