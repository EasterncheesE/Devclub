#pragma once
#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <set>
#include "Observer.h"

class Observer;

class Observable {
    protected:
        std::set<Observer*>* observerList;

    public:
        Observable();
        virtual ~Observable();

        void attach(Observer* customer);
        void detach(Observer* customer);
        void notify();
};

#endif //OBSERVABLE_H