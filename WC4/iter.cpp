#include <iostream>

class AriProgIterator {
    public:
        int current;
        AriProgIterator(int startValue, int step, int limit);
        ~AriProgIterator() {}
        
        bool isOver(AriProgIterator it) {
            if (this->current >= this->limit || this->current <= this->startValue) {
                return TRUE;
            } else {
                return FALSE;
            }
        }
        
        void next() {
            if (!(this->isOver())) {
                this->current += this->step;
            }
        }
        
        void prev() {
            if (!isOver())
        }
    
        void operator++(const AriProgIterator& it) {
            this.current += this.step;
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