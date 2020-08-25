#ifndef FIBONACCI_ITER_H
#define FIBONACCI_ITER_H

#include <iostream>
#include <vector>

class FibonacciIter {
private:
    int current;
    int limit;
    std::vector<int> cache;
public:
    FibonacciIter(int limit);
    ~FibonacciIter();
    
    int getCurrent();
    unsigned long long int getFactorial();
    
    void next();
    bool end();
    
    void operator++();
    void operator++(int);
    
    void extend();
};

std::ostream& operator<<(std::ostream& out, FibonacciIter& fIter);


#endif // FIBONACCI_ITER_H