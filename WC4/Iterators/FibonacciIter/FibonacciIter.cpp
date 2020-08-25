#include "FibonacciIter.h"


FibonacciIter::FibonacciIter(int limit) : limit(limit), current(1) {
    this->cache.push_back(1);
}

FibonacciIter::~FibonacciIter() {}


int FibonacciIter::getCurrent() {
    return this->current;
}

unsigned long long int FibonacciIter::getFactorial() {
    return this->cache[this->current-1];
}

void FibonacciIter::next() {
    if ( this->end() ) {
        return;
    }
    this->cache.insert(this->cache.begin() + this->current, this->cache[this->current-1] * this->current);
    this->current += 1;
    
}

bool FibonacciIter::end() {
    return (this->current > limit);
}

void FibonacciIter::operator++() {
    this->next();
}
void FibonacciIter::operator++(int) {
    this->next();
}

std::ostream& operator<<(std::ostream& out, FibonacciIter& fIter) {
    out << fIter.getCurrent();
    return out;
}
