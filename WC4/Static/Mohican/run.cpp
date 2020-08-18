#include <iostream>
#include "Mohican.h"

int main() {
    
    try {
        std::cout << "Last mohican: " << Mohican::getLastMohican() << std::endl;
    } catch (ZeroAliveMohicansException &e) {
        std::cout << e.text << std::endl;
    }
    
    Mohican* m1 = new Mohican("m1");
    Mohican* m2 = new Mohican("m2");
    Mohican* m3 = new Mohican("m3");
    Mohican* m4 = new Mohican("m4");
    Mohican* m5 = new Mohican("m5");
    
    std::cout << *m1 << std::endl;
    
    try {
        std::cout << "Last mohican: " << Mohican::getLastMohican() << std::endl;
    } catch (ZeroAliveMohicansException &e) {
        std::cout << e.text << std::endl;
    }
    
    delete m5;
    delete m2;
    delete m4;
    delete m1;
    
    try {
        std::cout << "Last mohican: " << Mohican::getLastMohican() << std::endl;
    } catch (ZeroAliveMohicansException &e) {
        std::cout << e.text << std::endl;
    }
    
    return 0;
}