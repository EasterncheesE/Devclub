
#include "List.h"

int main () {
    List a = List();
    List b = List();
    
    try { 
        List c = List(5000000,50); 
    } catch ( OutOfMemoryException obj ) {
        std::cout << "OutOfMemoryException" << std::endl;
    }
    
    std::cout << a << std::endl;
    std::cout << "a.array size = " << a.size() << std::endl; 
    std::cout << "a.array max_size = " << a.max_size() << std::endl; 
    std::cout << "Testing push_back for 25" << std::endl;
    try { for ( int i = 0; i < 25; i++ ) {
        a.push_back(25-i);
        std::cout << "A[" << i << "] = " << a[i] << std::endl;
        }
    } catch ( OutOfMemoryException obj ) {
        std::cout << "OutOfMemoryException" << std::endl;
    }
    
    std::cout << a << std::endl;
    std::cout << "testing pop_back" << std::endl;
    try { 
        a.pop_back(); 
    } catch ( ZeroLenException obj ) {
        std::cout << "ZeroLenException" << std::endl;
    }
    
    std::cout << "testing erase 250" << std::endl;
    try { 
        a.erase(250);
    } catch ( ZeroLenException obj ) {
        std::cout << "ZeroLenException" << std::endl;
    }
    
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << "A[" << i << "] = " << a[i] << std::endl;
    }
    
    std::cout << "testing insert 5 with 6" << std::endl;
    a.insert(6,5);
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << "A[" << i << "] = " << a[i] << std::endl;
    }
    std::cout << "testing <<" << std::endl;
    std::cout << a << std::endl;
    
    std::cout << "testing pop_back" << std::endl;
    a.pop_back();
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << "A[" << i << "] = " << a[i] << std::endl;
    }
    
    if ( a.size() == b.size() ) {
        std::cout << "a.size == b.size" << std::endl;
    } else {
        std::cout << "a.size != b.size" << std::endl;
    }
    
    if ( a.size() != b.size() ) {
        std::cout << "a.size != b.size" << std::endl;
    } else {
        std::cout << "a.size = b.size" << std::endl;
    }
    
    if ( a.max_size() == b.max_size() ) {
        std::cout << "a.maxSize == b.maxSize" << std::endl;
    } else {
        std::cout << "a.maxSize == b.maxSize" << std::endl;
    }
    std::cout << a.find(5) << std::endl;
    
    a.sort();
    for ( int i = 0; i < a.size(); i++ ) {
        std::cout << "A[" << i << "] = " << a[i] << std::endl;
    }
    
    return 0;
}
