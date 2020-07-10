#include "List.h"

List::List(int capacity, double multiplier) {
    if (capacity < 0) {
        capacity = 0;
    }
    
    this.capacity = capacity;
    this.current = 0;
    this.multiplier = multiplier;
    array = (int*)malloc(capacity*sizeof(int)); 
    
    if ( array == NULL ) {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(this->array);
}

int List::size() const {
    return this->current;
}
int List::max_size() const {
    return this->capacity;
}

void List::erase(int index) {
    if ( index < 0 || index >= this.current ) {
        return;
    } else {
    
    for ( int i = index, j = i + 1; j < this->current; i++, j++ ) {
        this->array[i] = this->array[j];
    }
    this->pop_back();
    }
}
void List::insert(int value, int index) {
    int newCurrent = current + 1;
    
    if ( newCurrent > this->capacity ) {
        int newCapacity = this->capacity * this->multiplier;
        int* newArray = (int*)realloc(this->array, newCapacity*sizeof(int));
        
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
        
        this->capacity = newCapacity;
        this->array = newArray;
    }
    
    for ( int i = this->current - 1, j = i - 1; i > index; i--, j-- ) {
        this->array[i] = this->array[j];
    }
    this->array[index] = value;
    this->current = newCurrent;
}

int List::find(int value) const {
    for ( int i = 0; i < this->current; i++ ) {
        if ( this->array[i] == value ) {
            return i;
        }
    }
    return -1;
}

void List::push_back(int value) { 
    int newCurrent = this->current + 1;
    
    if ( newCurrent > this->capacity ) {
        int newCapacity = this->capacity * this->multiplier;
        int* newArray = (int*)realloc(this->array, newCapacity * sizeof(int));
        
        this->capacity = newCapacity;
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
        this->array = newArray;
    }
    this->array[this->current] = value;
    this->current = newCurrent;
}

int List::pop_back() {
    if ( this->current == 0 ) {
        throw  ZeroLenException();
    }
    this->current -= 1;
    return this->array[this->current];
}
void List::sort() {
    for ( int i = 0; i < this->current; i++ ) {
        int buffer = i;
        
        for ( int j = i + 1; j < this->current; j++ ) {
            if ( this->array[j] < this->array[buffer] ) {
                buffer = j;
            }
        }
        if ( this->array[buffer] != this->array[i] ) {
            int temp = this->array[buffer];
            this->array[buffer] = this->array[i];
            this->array[i] = temp;
        }
    }
}

int List::operator[](int index) const {
    return this->array[index];
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
        out << "List is empty" << std::endl;
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
