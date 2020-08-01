#include "Observable.h"

Observable::Observable() : observerList(new std::set<Observer*>()) {}

Observable::~Observable() {
    delete(this->observerList);
}

void Observable::addObserver(Observer* customer) {
    this->observerList->insert(customer);
    std::cout << "adding observer" << std::endl;
}

void Observable::removeObserver(Observer* customer) {
    std::set<Observer*>::iterator it = this->observerList->find(customer);

    if ( it != observerList->end() ) {
        std::cout << "removing observer" << std::endl;
        this->observerList->erase(it);
    }
}

void Observable::notifyObservers() {
    std::cout << "Notifying observers" << std::endl;
    std::set<Observer*>::iterator it;

    for ( it = this->observerList->begin(); it != this->observerList->end(); it++ ) {
        Observer* necr = *it;
        std::cout << observerList->size() << std::endl;
        necr->removeObservable(this);
    }
}