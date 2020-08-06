#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <set>
#include "Observable.h"

class Observable;

class Observer {
    protected:
        std::set<Observable*>* observableList;

    public:
        Observer();
        virtual ~Observer();

        void addObservable(Observable* target);
        virtual void removeObservable(Observable* target);
        void notifyObservables();

};

#endif //OBSERVER_H