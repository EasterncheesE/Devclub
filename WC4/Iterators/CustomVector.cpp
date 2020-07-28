#include <iostream>
#include <cstdlib>

CustomVector() : capacity(100), current(0) {
    array = (Type*)malloc(capacity*sizeof(Type));
    if ( array == NULL ) {
        throw new OutOfMemoryException();
    }
}
~CustomVector() {
    free(array);
}
void push_back(const Type& elem) {
    size_t newCurrent = current + 1;

    if ( newCurrent == capacity ) {
        size_t newCapacity = capacity * multiplier;
        Type* newArray = (Type*)realloc(array, newCapacity*sizeof(Type));

        if ( array == NULL ) {
            throw new OutOfMemoryException();
        }
        capacity = newCapacity;
        array = newArray;
    }
    array[current] = elem;
    current = newCurrent;
}
Type pop_back() {
    if ( current == 0 ) {
        throw new EmptyContainerException();
    }
    current -= 1;
    return array[current];