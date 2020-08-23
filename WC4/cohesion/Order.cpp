#include "Order.h"
#include <algorithm>

Order::Order(std::string orderName, Customer* customer, Item* merch) {
    orders->push_back(this);
    this->orderName = orderName;
    this->customer = customer;
    this->merchList = new std::vector<Item*>;
    this->merchList->push_back(merch);
    merch->addOrder(this);
    
    customer->addOrder(this);
}

Order::~Order() {
    delete this->merchList;
    Order::orders->erase(std::remove(orders->begin(), orders->end(), this), orders->end());
}

std::string Order::getOrderName() {
    return this->orderName;
}
Customer* Order::getCustomer() {
    return this->customer;
}
void Order::getMerchList() {
    std::cout << this->orderName << " contents:" << std::endl;
    std::vector<Item*>::iterator it = merchList->begin();
    
    for ( int i = 1; it != merchList->end(); it++, i++ ) {
        std::cout << "    " << i << ": "<< *it << std::endl;
    }
}

void Order::addMerch(Item* merch) {
    this->merchList->push_back(merch);
    merch->addOrder(this);
}
void Order::removeMerch(Item* merch) {
    merchList->erase(std::remove(merchList->begin(), merchList->end(), merch), merchList->end());
    merch->removeOrder(this);
}

void Order::showOrders() {
    std::vector<Order*>::iterator it = Order::orders->begin();
    
    for ( ; it != orders->end(); it++) {
        std::cout << *it << std::endl;
    }
}

std::vector<Order*>* Order::orders = new std::vector<Order*>;

std::ostream& operator<<(std::ostream& out, Order* order) {
    out << order->getOrderName();
    return out;
}
