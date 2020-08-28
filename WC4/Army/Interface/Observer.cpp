#include "Observer.h"

Observer::Observer() : observableList(new std::set<Observable*>()) {
    std::cout << "Observer constructor" << std::endl;
}

Observer::~Observer() {
    std::cout << "Observer destructor" << std::endl;
    this->notifyObservables();
}

void Observer::addObservable(Observable *target) {
    std::cout << "Observer::addObservable" << std::endl;
    this->observableList->insert(target);
    target->addObserver(this);
}

void Observer::removeObservable(Observable *target) {
    std::cout << "Observer::removeObservable" << std::endl; 
    std::set<Observable*>::iterator it = this->observableList->find(target);


    if ( it != this->observableList->end() ) {
        this->observableList->erase(it);
    }
}

void Observer::notifyObservables() {
    std::cout << "Observer::notifyObservables" << std::endl;
    std::set<Observable*>::iterator it;

    for ( it = observableList->begin(); it != this->observableList->end(); it++ ) {
        Observable* target = *it;

        target->removeObserver(this);
    }
}

