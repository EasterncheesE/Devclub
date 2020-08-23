#include "Passport.h"

Passport::Passport(std::string firstName, std::string lastName, int day, int month, int year) {
    nextCurrentNumber();
    this->firstName = firstName;
    this->lastName = lastName;
    try {
        validate(day, month, year);
    } catch (Exception* e) {
        std::cout << e->text << std::endl;
        this->day = 1;
        this->month = 1;
        this->year = 1970;
        this->passportSeries = currentSeries;
        this->passportNumber = currentNumber;

        return;
    }
    
    this->day = day;
    this->month = month;
    this->year = year;
    
    this->passportSeries = currentSeries;
    this->passportNumber = currentNumber;
}

Passport::~Passport() {}

std::string Passport::getFirstName() {
    return this->firstName;
}
std::string Passport::getLastName() {
    return this->lastName;
}
int Passport::getDay() {
    return this->day;
}
int Passport::getMonth() {
    return this->month;
}
int Passport::getYear() {
    return this->year;
}
std::string Passport::getPassportSeries() {
    return this->passportSeries;
}
int Passport::getPassportNumber() {
    return this->passportNumber;
}


void Passport::validate(int day, int month, int year) {
 int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ) {
        daysInMonth[1] = 29;
    }
    if ( day < 1 || month < 1 || year < 1 ) {
        throw new InvalidDateException("day, month or year cannot be < 1.");
    }
    if ( month > 12 ) {
        throw new InvalidDateException("There are only 12 month in year.");
    }
    if ( day > daysInMonth[month-1] ) {
        throw new InvalidDateException("There are not so many days in this month.");
    }
    if ( year > 300000000 ) {
        throw new InvalidDateException("Are you going to live forever?");
    }
}

std::string Passport::getCurrentSeries() {
    return currentSeries;
}
int Passport::getCurrentNumber() {
    return currentNumber;
}
void Passport::nextCurrentSeries() {
    try {
        if ( currentSeries[0] == SERIES_END && currentSeries[1] == SERIES_END ) {
            currentSeries[0] = SERIES_START;
            currentSeries[1] = SERIES_START;
            currentNumber = NUMBER_START;
            throw new OutOfPassportsException();
        }
    } catch (Exception* e) {
        std::cout << e->text << std::endl;
        return;
    }
    
    if ( currentSeries[1] < SERIES_END ) {
        currentSeries[1] += 1;
    } else {
        currentSeries[0] += 1;
        currentSeries[1] = SERIES_START;
        currentNumber = NUMBER_START;
    }
}

void Passport::setCurrentSeries(std::string series) {
    int newNumber;
    
    if ( series.length() != 2) {
        throw new InvalidSeriesException();
    }
    currentSeries[0] = series[0];
    currentSeries[1] = series[1];
    
    std::cout << "Please enter new starting number" << std::endl;
    for ( std::cin >> newNumber; newNumber < NUMBER_START || newNumber > NUMBER_END ; ) {
        std::cout << "Please choose from " << NUMBER_START << " to " << NUMBER_END << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cin >> newNumber;
    }
    currentNumber = newNumber;
}

void Passport::nextCurrentNumber() {
    if ( currentNumber >= NUMBER_END ) {
        nextCurrentSeries();
    } else {
        currentNumber += 1;
    }
}

void Passport::setCurrentNumber(int number) {
    try { 
            if ( number < NUMBER_START || number > NUMBER_END ) {
                currentNumber = NUMBER_START;
                throw new WrongNumberException();
            }
    } catch (Exception* e) {
        std::cout << e->text << std::endl;
        return;
    }
    currentNumber = number;
    std::cout << currentNumber << std::endl;
}

int Passport::currentNumber = 0;
std::string Passport::currentSeries = "AA";

std::ostream& operator<<(std::ostream& out, Passport* passport) {
    std::cout.fill('0');
    out << "Name: " << passport->getFirstName() << " " << passport->getLastName() << std::endl;
    out << "Date of birth: " << passport->getDay() << "." << passport->getMonth() << "." << passport->getYear() << std::endl;
    if ( passport->getPassportNumber() < 10) {
        out << "Passport Number: " << passport->getPassportSeries() << " 00000" << passport->getPassportNumber();
    } else if ( passport->getPassportNumber() < 100) {
        out << "Passport Number: " << passport->getPassportSeries() << " 0000" << passport->getPassportNumber();
    } else if ( passport->getPassportNumber() < 1000) {
        out << "Passport Number: " << passport->getPassportSeries() << " 000" << passport->getPassportNumber();
    } else if ( passport->getPassportNumber() < 10000) {
        out << "Passport Number: " << passport->getPassportSeries() << " 00" << passport->getPassportNumber();
    } else if ( passport->getPassportNumber() < 100000) {
        out << "Passport Number: " << passport->getPassportSeries() << " 0" << passport->getPassportNumber();
    } else if ( passport->getPassportNumber() >= 100000) {
        out << "Passport Number: " << passport->getPassportSeries() << passport->getPassportNumber();
    }
    
    return out;
}