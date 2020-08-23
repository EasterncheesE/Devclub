#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include <vector>
#include "Exceptions.h"

#define SERIES_START 'A'
#define SERIES_END 'Z'
#define NUMBER_START 1
#define NUMBER_END 999999

class Passport {
private:
    std::string passportSeries;
    int passportNumber;
    int day;
    int month;
    int year;
    std::string firstName;
    std::string lastName;
    
    static std::string currentSeries;
    static int currentNumber;
public:
    Passport(std::string firstName, std::string lastName, int day, int month, int year);
    ~Passport();
    
    std::string getFirstName();
    std::string getLastName();
    int getDay();
    int getMonth();
    int getYear();
    std::string getPassportSeries();
    int getPassportNumber();
    
    
    void validate(int day, int month, int year);
    
    static std::string getCurrentSeries();
    static int getCurrentNumber();
    static void nextCurrentSeries();
    static void setCurrentSeries(std::string series);
    static void nextCurrentNumber();
    static void setCurrentNumber(int number);
};

std::ostream& operator<<(std::ostream& out, Passport* passport);

#endif // PASSPORT_H