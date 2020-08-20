#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include <vector>

#define SERIES_START "A"
#define SERIES_END "Z"
#define NUMBER_START 1
#define NUMBER_END 999999

class Passport {
private:
    char ID;
    int number;
    int day;
    int month;
    int year;
    std::string firstName;
    std::string lastName;
    
    static std::string lastID;
    static int lastNumber;
public:
    Passport(std::string firstName, std::string lastName, int day, int month, int year);
    ~Passport() {}
    
    Passport* getPassportInfo();
    std::string getFirstName;
    std::string getFamilyName;
    int getDay;
    int getMonth;
    int getYear;
    std::string getID();
    int getNumber();
    
    
    void validate(int day, int month, int year);
    static Passport* getPassportInfo();
    static void changeSeries();
    
};

std::ostream& operator<<(std::ostream& out, Passport* passport);
}

#endif // PASSPORT_H