#include <iostream>

int main() {
    int x = 5;
    float y = 10.2;
    
    
    x += y + 'a';
    
    std::cout << x << std::endl;
    
    return 0;
}