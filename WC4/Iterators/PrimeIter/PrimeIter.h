#ifndef PRIME_ITER_H
#define PRIME_ITER_H

#include <iostream>
#include <vector>
#include <cmath>

class PrimeIter {
private:
    int current;
    int counter;
    std::vector<long long int> primes;
public:
    PrimeIter(int limit);
    ~PrimeIter();
    
    long long int getPrime();
    int getCurrent();
    
    void next();
    void prev();
    void setCurrent();
    
    
    
    void operator++();
    void operator++(int);
    void operator--();
    void operator--(int);
    
};

std::ostream& operator<<(std::ostream& out, PrimeIter& fIter);


#endif // PRIME_ITER_H