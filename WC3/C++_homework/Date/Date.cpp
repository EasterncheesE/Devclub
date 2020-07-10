#include "Date.h"
#include <iostream>

void Date::validate(int day, int month, int year) {
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

Date::Date(int day, int month, int year) {
    try {
        validate(day,month,year);
    } catch ( InvalidDate& e ) {
        std::cout << e.text << std::endl;
        this->day = 1;
        this->month = 1;
        this->year = 1970;
        return;
    }
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date() {}

int Date::getDay() const {
    return this->day;
}
int Date::getMonth() const {
    return this->month;
}
int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.getDay() << "." << date.getMonth() << "." << date.getYear();
    return out;
}

