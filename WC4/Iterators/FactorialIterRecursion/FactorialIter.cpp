#include "FactorialIter.h"


FactorialIter::FactorialIter(int limit) : limit(limit) {
    this->current = limit;
    this->factorial = 0;
    this->cache.push_back(1);
}

FactorialIter::~FactorialIter() {}


int FactorialIter::getCurrent() {
    return this->current;
}
{
unsigned long long FactorialIter::getFactorial() {
    if ( !(this->end()) ) {
        return this->getFactorial((limit - 1) * limit);
    } else if {
        return 1;
    }
}

void FactorialIter::next() {
    if ( this->end() ) {
        return;
    }
    
}

unsigned long long int FactorialIter::showFactorial() {
    return this->cache[current-1];
}

bool FactorialIter::end() {
    return (this->limit < 1);
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
