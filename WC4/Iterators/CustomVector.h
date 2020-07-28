#ifndef CUSTOM_VECTOR_H
#define CUSTOM_VECTOR_H

#include <iostream>
#include <cstdlib>

class OutOfMemoryException {};
class EmptyContainerException {};

template <class T>
class CustomVector {
    private:
        T *array;
        T capacity;
        T current;
        static double multiplier;
    public:
        CustomVector();
        ~CustomVector();

        size_t max_size() const;
        size_t size() const;

        void push_back(const Type& elem);
        Type pop_back();

        const Type& operator[](size_t index) const;
};

template <class T>
double CustomVector<T>::multiplier = 1.05;

#endif //CUSTOM_VECTOR_H