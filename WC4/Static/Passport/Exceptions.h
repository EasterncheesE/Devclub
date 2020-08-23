#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>

class Exception {
public:
    std::string text;
    Exception(std::string text) : text(text) {}
    ~Exception() {}
};

class InvalidDateException : public Exception {
public:
    InvalidDateException(std::string text = "You have entered invalid date") : Exception(text) {}
    ~InvalidDateException() {}
};

class OutOfPassportsException : public Exception {
public:
    OutOfPassportsException(std::string text = "We have reached the limit of series and numbers" ) : Exception(text) {}
    ~OutOfPassportsException();
};

class InvalidSeriesException : public Exception {
public:
    InvalidSeriesException(std::string text = "We have reached the limit of series" ) : Exception(text) {}
    ~InvalidSeriesException();
};

class WrongNumberException : public Exception {
public:
    WrongNumberException(std::string text = "Wrong number" ) : Exception(text) {}
    ~WrongNumberException();
};
#endif // EXCEPTIONS_H