#include "FactorialIter.h"


FactorialIter::FactorialIter(int limit) : limit(limit), current(1) {
    this->factorials.push_back(1);
}

FactorialIter::~FactorialIter() {}


int FactorialIter::getCurrent() {
    return this->current;
}

unsigned long long int FactorialIter::getFactorial() {
    return this->factorials[this->current-1];
}

void FactorialIter::next() {
    if ( this->end() ) {
        return;
    }
    this->factorials.insert(this->factorials.begin() + this->current, this->factorials[this->current-1] * this->current);
    this->current += 1;
    
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

unsigned long long int FactorialIter::operator*() {
    return this->getFactorial();
}