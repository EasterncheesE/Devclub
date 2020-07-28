#include "Template.h"

int main() {
    Template<int> a = new Template<int>(1,1);
    
    std::cout << a << std::endl;
    
    return 0;
}