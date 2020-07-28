#include "VectorT.h"
 
template <class T>
VectorT<T>::VectorT()
{
}
template <class T>
void VectorT<T>::SetValue( T value ) {}

template <class T>
T VectorT<T>::GetValue() {
    return object;
}