#ifndef GEO_PROG_ITER_H
#define GEO_PROG_ITER_H

#include <iostream>

class GeoProgIter {
private:
    int step;
    int counter;
    int current;
    int repeats;
public:
    GeoProgIter(int start, int step, int repeats);
    ~GeoProgIter();
    
    int getCurrent();
    
    void next();
    bool end();
    
    void operator++();
    void operator++(int);
};

std::ostream& operator<<(std::ostream& out, GeoProgIter& iterator);

#endif // GEO_PROG_ITER_H