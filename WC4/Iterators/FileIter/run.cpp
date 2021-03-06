#include <iostream>
#include <string>
#include "FileIter.h"

int main() {
    std::string filePath = "./File.in";
    
    FileIter fIter(filePath);
    
    for ( int i = 0; !fIter.end(); i++ ) {
        fIter.next();
        std::cout << *fIter << std::endl;
    }
    
    
    return 0;
}