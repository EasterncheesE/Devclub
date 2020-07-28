#include "Observable.h"

Observable::Observable() : observerList(new std::set<Observer*>()) {}

Observable::~Observable() {
}

void Observable::attach(Observer* customer) {
    this->observerList->insert(customer);
}

void Observable::detach(Observer* customer) {
    std::set<Observer*>::iterator it = this->observerList->find(customer);

    if ( it != observerList->end() ) {
        this->observerList->erase(it);
    }
}

void Observable::notify() {
    std::set<Observer*>::iterator it;

    for ( it = this->observerList->begin(); it != this->observerList->end(); it++ ) {
        Observer* necr = *it;

        necr->update(this);
    }
}