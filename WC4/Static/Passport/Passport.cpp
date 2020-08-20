#include "Passport.h"

Passport::Passport(std::string firstName, std::string lastName, int day, int month, int year) {
    if ( lastNumber >= NUMBER_END ) {
        if ( lastID[1] != "Z" ) {
            lastID[1] += 1;
        } else {
            if ( lastID[0] != "Z" ) {
                lastID[0] += 1;
                lastID[1] = "A";
            } else {
                std::string newSeries;
                
                std::cout << "Looks like we came to the end of possible series, please manually input new series" << std::endl;
                for ( std::cin >> newID; newID < ID_START || newID > ID_END ) {
                    std::cout << "Please choose only 1 - 999 999" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(1000, "\n");
                    std::cin >> newID;
                }
                this->changeSeries(newID);
            }
    }
    
    this->firstName = firstName;
    this->lastName = lastName;
    try {
        validate(day, month, year);
    } catch (InvalidDateExpection &e) {
        std::cout << "e.text" << std::endl;
        this->day = 1;
        this->month = 1;
        this->year = 1970;
        return;
    }
    this->day = day;
    this->month = month;
    this->year = year;
    
    lastNumber += 1;
    
    
}

Passport::~Passport() {}

Passport* Passport::getPassportInfo() {
    return this;
}
std::string Passport::getFirstName {
    return this->firstName;
}
std::string Passport::getLastName {
    return this->lastName;
}

int Passport::getDay {
    return this->day;
}
int Passport::getMonth {
    return this->month;
}
int Passport::getYear {
    return this->year;
}

std::string Passport::getID() {
    return this->ID;
}
int Passport::getNumber() {
    return this->number;
}


void Passport::validate(int day, int month, int year) {
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ) {
        daysInMonth[1] = 29;
    }

    if ( day < 1 || month < 1 || year < 1 ) {
        throw InvalidDate("day, month or year cannot be < 1.");
    }
    if ( month > 12 ) {
        throw InvalidDate("There are only 12 month in year.");
    }
    if ( day > daysInMonth[month-1] ) {
        throw InvalidDate("There are not so many days in this month.");
    }
    if ( year > 2147483647 ) {
        throw InvalidDate("Sorry, our calendar is not that big.");
    }
}   

std::string Passport::getLastID() {
    return lastID;
}
int Passport::getLastNumber() {
    return lastNumber;
}
static void Passport::changeSeries(std::string series) {
    int newNumber;
    
    if ( series < SERIES_START || series > SERIES_END ) {
        throw new WrongSeriesException("Series can only go from AA to ZZ");
    } 
    lastID = series;
    
    std::cout << "Please choose the starting number for this series (1 - 999 999)" << std::endl;
    for ( std::cin >> newNumber; newNumber < NUMBER_START || newNumber > NUMBER_END ) {
        std::cout << "Please choose only 1 - 999 999" << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, "\n");
        std::cin >> newNumber;
    }
    lastNumber = newNumber;
}


std::ostream& operator<<(std::ostream& out, Passport* passport) {
    out << "Name: " << passport->getFirstName() << " " << passport->getLastName() << std::endl;
    out << "Date of birth: " << passport->getDay() << "." << passport->getMonth() << "." << passport->getYear() << std::endl;
    out << "Passport Number:" << passport->getID() << " " << passport->getNumber() << std::endl;
    
    return out;
}