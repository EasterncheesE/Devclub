#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H

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
        void notifyObservables();
        virtual void update(Observable* target);
};

#endif //OBSERVER_H