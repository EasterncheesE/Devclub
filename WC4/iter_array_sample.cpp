#include <iostream>

class AriProgIterator {
    public:
        int currentIndex;
        int limit;
        
        ArrayIterator(int array[], int size) {
            this->limit = size - 1;
        }
        ~ArrayIterator() {};
        
        bool isOver(AriProgIterator it) {
            if (this->currentIndex > size - 1 || this->currentIndex < 0) {
                return TRUE;
            } else {
                return FALSE;
            }
        }
        
        void next() {
            if (!(this->isOver())) {
                this->currentIndex += this->step;
            }
        }
    
        void operator++(const AriProgIterator& it) {
            this.currentIndex += this.step;
        }
        
        int show() {
            return this->array[this->currentIndex];
        }
}


int main() {
    AriProgIterator it(0, 5, 2000000) //третий параметр - может быть верхнее значение или количество раз, сам решаешь.
    
    for ( ; !it.isOver(); it++) { // итерируем вверх
            std::cout << *it << std::endl;
    }
    
    for ( ; !it.isOver(); it--) { // потом итерируем вниз
            std::cout << *it << std::endl;
    }
    
    return 0;
}