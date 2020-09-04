#ifndef ARI_PROG_ITER_H
#define ARI_PROG_ITER_H

#include <iostream>

class AriProgIter {
private:
    int step;
    int counter;
    int current;
    int limit;
public:
    AriProgIter(int start, int step, int limit);
    ~AriProgIter();
    
    int getCurrent();
    
    void next();
    bool end();
    
    void operator++();
    void operator++(int);
    
    int operator*();
};


#endif // ARI_PROG_ITER_H