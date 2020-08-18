#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>

class Exception {
public:
    std::string text;
    
    Exception(std::string text) : text(text) {}
    virtual ~Exception() {}
};

class ZeroAliveMohicansException : public Exception {
public:
    ZeroAliveMohicansException(std::string text = "There are no alive mohicans") : Exception(text) {}
    ~ZeroAliveMohicansException() {}
};

#endif // EXCEPTIONS_H