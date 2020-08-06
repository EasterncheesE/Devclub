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

        virtual void addObservable(Observable* target);
        virtual void removeObservable(Observable* target);
        virtual void notifyObservables();

};

#endif //OBSERVER_H