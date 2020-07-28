#ifndef LIST_H
#define LIST_H

#include <iostream>

template <class T>
class List {
    private:
        T* array;
        int capacity;
        int current;
        double multiplier;
        
        
    public:
        List(int capacity = 0, double multiplier = 1.05);
        ~List();
        
        void insert(int index, T value);
        void push_back(T value);
        
        int getCapacity();
        int getCurrent();
        T getArray(int index);
        
        void increase();
        
        void pop_back();
        void remove(int index);

};
#endif // LIST_H