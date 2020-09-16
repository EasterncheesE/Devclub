#include "FibonacciIter.h"

FibonacciIter::FibonacciIter(int current) :  current(current) {
    if ( this->current == 0) {
        this->fibsPositive.insert(this->fibsPositive.begin(), 0);
        this->fibsNegative.insert(this->fibsNegative.begin(), 0);
    }
    if ( this->current < 0 ) {
        this->fibsNegative.insert(this->fibsNegative.begin() - this->current, this->getFibonacci(this->current));
    } else {
        this->fibsPositive.insert(this->fibsPositive.begin() + this->current, this->getFibonacci(this->current));
    }
}

FibonacciIter::~FibonacciIter() {}

int FibonacciIter::getCurrent() {
    return this->current;
}

long long int FibonacciIter::getFibonacci(int value) {
    if ( value == 1 || value == -1 ) {
        return 1;
    }
    if ( value == 0 ) {
        return 0;
    }
    if ( value < 0 ) {
        return getFibonacci(value + 2) - getFibonacci(value + 1);
    }
    return getFibonacci(value - 2) + getFibonacci(value - 1);
}

void FibonacciIter::next() {
    this->current += 1;
    
    if ( this->current < 0 ) {
        int temp = -(this->current);
        
        std::cout << temp << std::endl;
        this->fibsNegative.insert(this->fibsNegative.begin() + temp, this->getFibonacci(this->current));
        // std::cout << "NEGATIVE" << std::endl;
    } else {
        this->fibsPositive.insert(this->fibsPositive.begin() + this->current, this->getFibonacci(this->current));
    }

}

void FibonacciIter::prev() {
    this->current -= 1;
    
    if ( this->current < 0 ) {
        int temp = -(this->current);
        
        // std::cout << temp << " PREV NEGATIVE" << std::endl;
        this->fibsNegative.insert(this->fibsNegative.begin() + temp, this->getFibonacci(this->current));
    } else {
        this->fibsPositive.insert(this->fibsPositive.begin() + this->current, this->getFibonacci(this->current));
    }

    // std::cout << "PREV FINISHED" << std::endl;
    
}

void FibonacciIter::operator++() {
    this->next();
}
void FibonacciIter::operator++(int) {
    this->next();
}

void FibonacciIter::operator--() {
    this->prev();
}
void FibonacciIter::operator--(int) {
    this->prev();
}

void FibonacciIter::setCurrent() {
    int value;
    
    std::cout << "Please type in value to set" << std::endl;
    std::cin >> value;
    this->current = value;
    
    if ( this->current < 0 ) {
        int temp = -value;
        
        // std::cout << temp << " Set NEGATIVE" << std::endl;
        this->fibsNegative.insert(this->fibsNegative.begin() + temp, this->getFibonacci(this->current));
    } else {
        this->fibsPositive.insert(this->fibsPositive.begin() + this->current, this->getFibonacci(this->current));
    }
    
    // std::cout << "Set finished" << std::endl;
    
}

long long int FibonacciIter::operator*() {
    if ( this->current < 0 ) {
        int temp = -this->current;
        
        return this->fibsNegative[temp];
    }
    return this->fibsPositive[this->current];
}
