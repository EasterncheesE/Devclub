#include "FactorialIter.h"


FactorialIter::FactorialIter(int limit) : limit(limit), current(1) {
    this->cache.push_back(1);
}

FactorialIter::~FactorialIter() {}


int FactorialIter::getCurrent() {
    return this->current;
}

unsigned long long int FactorialIter::getFactorial() {
    return this->cache[this->current-1];
}

void FactorialIter::next() {
    if ( this->end() ) {
        return;
    }
    this->cache.insert(this->cache.begin() + this->current, this->cache[this->current-1] * this->current);
    this->current += 1;
    
}

unsigned long long int FactorialIter::showFactorial() {
    return this->cache[current-1];
}

bool FactorialIter::end() {
    return (this->current > limit);
}

void FactorialIter::operator++() {
    this->next();
}
void FactorialIter::operator++(int) {
    this->next();
}

std::ostream& operator<<(std::ostream& out, FactorialIter& fIter) {
    out << fIter.getCurrent();
    return out;
}
