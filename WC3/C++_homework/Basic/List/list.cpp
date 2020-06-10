#include "List.h"

List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier) {
    array = (int*)malloc(capacity*sizeof(int)); 
    
    if ( array == NULL ) {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(array);
}

int List::size() const {
    return current;
}
int List::max_size() const {
    return capacity;
}

void List::erase(int index) {
    if ( index < 0 || index >= current ) {
        return;
    } else {
    
    for ( int i = index, j = i + 1; j < current; i++, j++ ) {
        array[i] = array[j];
    }
    pop_back();
    }
}
void List::insert(int value, int index) {
    int newCurrent = current + 1;
    
    if ( newCurrent > capacity ) {
        int newCapacity = capacity * multiplier;
        std::cout << "newCap = " << newCapacity << std::endl;
        int* newArray = (int*)realloc(array, newCapacity*sizeof(int));
        
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
        
        capacity = newCapacity;
        array = newArray;
    }
    
    for ( int i = current - 1, j = i - 1; i > index; i--, j-- ) {
        array[i] = array[j];
    }
    array[index] = value;
    current = newCurrent;
}

int List::find(int value) const {
    for ( int i = 0; i < current; i++ ) {
        if ( array[i] == value ) {
            return i;
        }
    }
    return -1;
}

void List::push_back(int value) { 
    int newCurrent = current + 1;
    
    if ( newCurrent > capacity ) {
        int newCapacity = capacity * multiplier;
        int* newArray = (int*)realloc(array, newCapacity * sizeof(int));
        
        capacity = newCapacity;
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
        array = newArray;
    }
    array[current] = value;
    current = newCurrent;
}

int List::pop_back() {
    if ( current == 0 ) {
        throw  ZeroLenException();
    }
    current -= 1;
    return array[current];
}
void List::sort() {
    for ( int i = 0; i < current; i++ ) {
        int buffer = i;
        
        for ( int j = i + 1; j < current; j++ ) {
            if ( array[j] < array[buffer] ) {
                buffer = j;
            }
        }
        if ( array[buffer] != array[i] ) {
            int temp = array[buffer];
            array[buffer] = array[i];
            array[i] = temp;
        }
    }
}

int List::operator[](int index) const {
    return array[index];
}

bool List::operator==(const List& other) const {
    bool flag;
    
    if ( this->current == other.current && this->capacity == other.capacity && this->multiplier == other.multiplier ) {
        flag = true;
        for ( int i = 0; i < this->current; i++ ) {
            if ( this->array[i] != other.array[i] ) {
                flag = false;
            }
        }
    } else {
        flag = false;
    }
    return flag;
    }

bool List::operator!=(const List& other) const {
    return !((*this) == other);
}


std::ostream& operator<<(std::ostream& out, const List& list) {
    if ( list.size() < 1) {
        std::cout << "List is empty" << std::endl;
        return out;
    } else {
    int last = list.size() - 1;
    
    if ( last < 0 ) {
        last = 0;
    }
    
    for ( int i = 0; i < last; i++ ) {
        out << list[i] << ' ';
    }
    out << list[last];
    return out;
    }
}

