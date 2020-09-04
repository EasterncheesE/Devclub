#ifndef FACTORIAL_ITER_H
#define FACTORIAL_ITER_H

#include <iostream>
#include <vector>

class FactorialIter {
private:
    int current;
    int limit;
    std::vector<unsigned long long int> factorials;
public:
    FactorialIter(int limit);
    ~FactorialIter();
    
    int getCurrent();
    unsigned long long int getFactorial();
    
    void next();
    bool end();
    
    void operator++();
    void operator++(int);
    
    void extend();
    
    unsigned long long int operator*();
};


#endif // FACTORIAL_ITER_H