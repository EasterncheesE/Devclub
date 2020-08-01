#include "Observer.h"

Observer::Observer() : observableList(new std::set<Observable*>()) {}

Observer::~Observer() {
    this->notifyObservables();
}

void Observer::addObservable(Observable *target) {
    std::cout << "Adding observable" << std::endl;
    this->observableList->insert(target);
    target->addObserver(this);
}

void Observer::removeObservable(Observable *target) {
    std::set<Observable*>::iterator it = this->observableList->find(target);
    std::cout << "removing observable" << std::endl;

    if ( it != this->observableList->end() ) {
        this->observableList->erase(it);
    }
}

void Observer::notifyObservables() {
    std::set<Observable*>::iterator it;

    for ( it = observableList->begin(); it != this->observableList->end(); it++ ) {
        Observable* target = *it;

        target->removeObserver(this);
    }
}

