#include "ArrayIter.h"

template <class T>
ArrayIter<T>::ArrayIter(T *array, int current, int size) : array(array), current(current), limit(size) {}

template <class T>
ArrayIter<T>::~ArrayIter() {
    // delete this->array;
}

template <class T>
int ArrayIter<T>::getCurrent() {
    return this->current;
}
template <class T>
T ArrayIter<T>::getValue() {
    return this->array[this->current];
}
template <class T>
bool ArrayIter<T>::begin() {
    return (this->current < 1);
}
template <class T>
bool ArrayIter<T>::end() {
    return this->current >= this->limit - 1;
}

template <class T>
void ArrayIter<T>::next() {
    if ( this->end() ) {
        std::cout << "END OF ARRAY REACHED" << std::endl;
        return;
    }
    this->current += 1;
}

template <class T>
void ArrayIter<T>::prev() {
    if ( this->begin() ) {
        std::cout << "BEGINNING OF ARRAY REACHED" << std::endl;
        return;
    }
    this->current -= 1;
}
template <class T>
void ArrayIter<T>::setCurrent(int current) {
    if ( current >= this->limit ) {
        std::cout << "Array is too small" << std::endl;
        this->current = limit - 1;
    } else {
        this->current = current;
    }
}

template <class T>
void ArrayIter<T>::operator++() {
    this->next();
}
template <class T>
void ArrayIter<T>::operator++(int) {
    this->next();
}
template <class T>
void ArrayIter<T>::operator--() {
    this->prev();
}
template <class T>
void ArrayIter<T>::operator--(int) {
    this->prev();
}
template <class T>
T ArrayIter<T>::operator*() {
    return this->getValue();
}

template class ArrayIter<int>;
template class ArrayIter<float>;
template class ArrayIter<double>;