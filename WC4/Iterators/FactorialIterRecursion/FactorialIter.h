#ifndef FACTORIAL_ITER_H
#define FACTORIAL_ITER_H

#include <iostream>
#include <vector>

class FactorialIter {
private:
    int counter;
    int limit;
    unsigned long long int factorial;
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
};

std::ostream& operator<<(std::ostream& out, FactorialIter& fIter);


#endif // FACTORIAL_ITER_H