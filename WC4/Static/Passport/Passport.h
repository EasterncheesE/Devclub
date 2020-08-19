#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include <vector>

class Passport {
private:
    char ID;
    int number;
    
    static char lastID[];
    static int lastNumber;
public:
    Passport();
    ~Passport();
    
    Passport* getPassportInfo();
    
    static Passport* getPassportInfo();
    static void changeSeries();
    
}


#endif // PASSPORT_H