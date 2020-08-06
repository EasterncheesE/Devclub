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

        void addObserver(Observer* customer);
        void removeObserver(Observer* customer);
        void notifyObservers();
};

#endif //OBSERVABLE_H