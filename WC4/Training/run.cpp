#include "List.h"

int main() {
    List<double> *a = new List<double>(10,1.5);
    
    
    for (int i = 0; i < a->getCurrent(); i++) {
        std::cout << a->getArray(i) <<std::endl;
    }
    
    for ( double i = 0.5; i < 100; i++) {
        a->push_back(i);
    }
    
    a->pop_back();
    
    //     for (int i = 0; i < a->getCurrent(); i++) {
    //     std::cout << a->getArray(i) <<std::endl;
    // }
    
    return 0;
}