#ifndef ARRAY_ITER_H
#define ARRAY_ITER_H

#include <iostream>
#include <vector>

template <class T>
class ArrayIter {
private:
    T* array;
    int current;
    int limit;
    T value;
public:
    ArrayIter(T *array, int current, int size);
    ~ArrayIter();
    

    int getCurrent();
    T getValue();
    bool begin();
    bool end();
    
    void next();
    void prev();
    void setCurrent(int current);
    
    void operator++();
    void operator++(int);
    void operator--();
    void operator--(int);
    
    T operator*();
};
#endif // ARRAY_ITER_H