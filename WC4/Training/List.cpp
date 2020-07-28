#include "List.h"

template <class T>
List<T>::List(int capacity, double multiplier) {
    this->current = 0;
    this->capacity = capacity;
    this->multiplier = multiplier;
    
    array = (T*)malloc(this->capacity*sizeof(T));
}
template <class T>
List<T>::~List() {}

template <class T>
int List<T>::getCapacity() {
    return this->capacity;
}

template <class T>
int List<T>::getCurrent() {
    return this->current;
}

template <class T>
T List<T>::getArray(int index) {
    return this->array[index];
}

template <class T>
void List<T>::increase() {
    int newCapacity = this->capacity * this->multiplier;
    T* newArray = (T*)malloc(newCapacity * sizeof(T));
    
    if (newArray != NULL) {
        this->array = newArray;
        this->capacity = newCapacity;
        std::cout << "Increasing array" << std::endl;
    } else {
        std::cout << "ALL IS BAD" << std::endl;
        return;
    }
}

template <class T>
void List<T>::insert(int index, T value) {
    
    this->array[index] = value;
    current += 1;
}
template <class T>
void List<T>::push_back(T value) {
    int newCurrent = this->current + 1;
    
    if (newCurrent >= this->capacity) {
        this->increase();
    }
    this->array[this->current] = value;
    std::cout << this->array[this->current] << " ";
    this->current = newCurrent;

}

template <class T>
void List<T>::pop_back() {
    
}

template <class T>
void List<T>::remove(int index) {
    
}

template class List<int>;
template class List<double>;