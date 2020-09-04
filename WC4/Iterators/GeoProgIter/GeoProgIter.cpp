#include "GeoProgIter.h"

GeoProgIter::GeoProgIter(int start, int step, int repeats) : current(start), step(step), repeats(repeats), counter(0) {}
GeoProgIter::~GeoProgIter() {}

int GeoProgIter::getCurrent() {
    return this->current;
}

void GeoProgIter::next() {
    if ( !(this->end()) ) {
        this->current *= step;
        this->counter += 1;
    }
}

bool GeoProgIter::end() {
    return ( this->counter >= this->repeats);
}

void GeoProgIter::operator++() {
    this->next();
}
void GeoProgIter::operator++(int) {
    this->next();
}

int GeoProgIter::operator*() {
    return this->getCurrent();
}