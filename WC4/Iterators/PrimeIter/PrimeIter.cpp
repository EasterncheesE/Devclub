#include "PrimeIter.h"

PrimeIter::PrimeIter(int current) :  current(current), counter(current), primes({2}) {
}

PrimeIter::~PrimeIter() {}

int PrimeIter::getCurrent() {
    return this->current;
}


long long int PrimeIter::getPrime() {
    return this->primes[this->current];
}

void PrimeIter::next() {
    this->counter = 0;
    
    for ( int i = 3 , j = 0; this->counter < this->current;) {
        for ( ; primes[j] < sqrt[i] ) {
            if (i % primes[j] == 0) {
                i++;
                j++;
            } else {
                j++
            }
        }
    }
}

void PrimeIter::prev() {
    this->current -= 1;
    this->counter = 0;
}

void PrimeIter::operator++() {
    this->next();
}
void PrimeIter::operator++(int) {
    this->next();
}

void PrimeIter::operator--() {
    this->prev();
}
void PrimeIter::operator--(int) {
    this->prev();
}

void PrimeIter::setCurrent() {
    int value;
    
    std::cout << "Please type in value to set" << std::endl;
    
    std::cin >> value;
    this->current = value;
    
    std::cout << *this << std::endl;
}

std::ostream& operator<<(std::ostream& out, PrimeIter& fIter) {
    out << fIter.getPrime();
    return out;
}
