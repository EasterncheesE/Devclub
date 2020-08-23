#ifndef ARI_PROG_ITER_H
#define ARI_PROG_ITER_H

#include <iostream>

class AriProgIter {
private:
    int step;
    int counter;
    int current;
    int repeats;
public:
    AriProgIter(int start, int step, int repeats);
    ~AriProgIter();
    
    int getCurrent();
    
    void next();
    bool end();
    
    void operator++();
    void operator++(int);
};

std::ostream& operator<<(std::ostream& out, AriProgIter& iterator);

#endif // ARI_PROG_ITER_H