#include "PrimeIter.h"

PrimeIter::PrimeIter(int current) :  current(current), primes({2}) {
    this->counter = 0;

    for ( ; this->counter < this->current-1; ) {
        long long int temp = this->primes[this->counter] + 1;
        
        for ( int j = 0; primes[j] <= sqrt(temp); ) {
            if ( temp % primes[j] == 0 ) {
                j = 0;
                temp += 1;
            } else {
                j++;
            }
        }
        this->counter += 1;
        this->primes.insert(this->primes.begin() + this->counter, temp);

    }
    
}

PrimeIter::~PrimeIter() {}

int PrimeIter::getCurrent() {
    return this->current;
}

long long int PrimeIter::getPrime() {
    return this->primes[this->current-1];
}

bool PrimeIter::over() {
    return this->counter >= this->current;
}

void PrimeIter::next() {
    this->current += 1;
    
    if ( this->counter + 1 > this->current ) {
        return;
    }
    for ( ; this->counter < this->current-1; ) {
        long long int temp = this->primes[this->counter] + 1;
        
        for ( int j = 0; primes[j] <= sqrt(temp); ) {
            if ( temp % primes[j] == 0 ) {
                j = 0;
                temp += 1;
            } else {
                j++;
            }
        }
        this->counter += 1;
        this->primes.insert(this->primes.begin() + this->counter, temp);

    }

}

void PrimeIter::prev() {
    if ( this->current <= 1 ) {
        std::cout << "Cannot be less that 1" << std::endl;
    } else {
        this->current -= 1;
    }

    
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
    
    if ( this->current > this->counter ) {
        for ( ; this->counter < this->current-1; ) {
            long long int temp = this->primes[this->counter] + 1;
        
            for ( int j = 0; primes[j] <= sqrt(temp); ) {
                if ( temp % primes[j] == 0 ) {
                    j = 0;
                    temp += 1;
                } else {
                    j++;
                }
            }
            this->counter += 1;
            this->primes.insert(this->primes.begin() + this->counter, temp);

        }
    }
}

long long int PrimeIter::operator*() {
    return this->getPrime();
}
