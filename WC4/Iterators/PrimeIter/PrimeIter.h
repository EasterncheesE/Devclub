#ifndef PRIME_ITER_H
#define PRIME_ITER_H

#include <iostream>
#include <vector>
#include <cmath>

class PrimeIter {
public:
    int current;
    int counter;
    std::vector<long long int> primes;
public:
    PrimeIter(int limit);
    ~PrimeIter();
    
    int getCurrent();
    long long int getPrime();
    bool over();
    
    void next();
    void prev();
    void setCurrent();
    void operator++();
    void operator++(int);
    void operator--();
    void operator--(int);
    
    long long int operator*();
    
};


#endif // PRIME_ITER_H