#pragma once
#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <iostream>
#include <set>
#include "Observer.h"

class Observer;

class Observable {
protected:
        std::set<Observer*>* observerList;

public:
        Observable();
        virtual ~Observable();

        virtual void addObserver(Observer* customer);
        virtual void removeObserver(Observer* customer);
        virtual void notifyObservers();
};

#endif //OBSERVABLE_H