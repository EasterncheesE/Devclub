#ifndef FIBONACCI_ITER_H
#define FIBONACCI_ITER_H

#include <iostream>
#include <vector>

class FibonacciIter {
private:
    int current;
    std::vector<int> fibsPositive;
    std::vector<int> fibsNegative;
public:
    FibonacciIter(int limit);
    ~FibonacciIter();
    
    long long int getFibonacci(int value);
    int getCurrent();
    
    void next();
    void prev();
    void setCurrent();
    
    void operator++();
    void operator++(int);
    void operator--();
    void operator--(int);
    
    long long int operator*();
    
};

#endif // FIBONACCI_ITER_H