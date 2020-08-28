#include "Observable.h"

Observable::Observable() : observerList(new std::set<Observer*>()) {
    std::cout << "Observable constructor" << std::endl;
}

Observable::~Observable() {
    std::cout << "Observable destructor" << std::endl;
    delete(this->observerList);
}

void Observable::addObserver(Observer* customer) {
    std::cout << "Observable::addObserver" << std::endl;
    this->observerList->insert(customer);

}

void Observable::removeObserver(Observer* customer) {
    std::cout << "Observable::removeObserver" << std::endl;
    std::set<Observer*>::iterator it = this->observerList->find(customer);

    if ( it != observerList->end() ) {
        this->observerList->erase(it);
    }
}

void Observable::notifyObservers() {
    std::cout << "Observable::notifyObservers" << std::endl;
    std::set<Observer*>::iterator it;

    for ( it = this->observerList->begin(); it != this->observerList->end(); it++ ) {
        Observer* necr = *it;
        necr->removeObservable(this);
    }
}