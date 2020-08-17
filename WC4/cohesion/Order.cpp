#include "Order.h"
#include <algorithm>

Order::Order(std::string orderName, Customer* customer, Item* merch) {
    this->orderName = orderName;
    this->customer = customer;
    this->merchList = new std::vector<Item*>;
    this->merchList->push_back(merch);
    merch->addOrder(this);
    
    customer->addOrder(this);
}

Order::~Order() {
    delete this->merchList;
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

std::ostream& operator<<(std::ostream& out, Order* order) {
    out << order->getOrderName();
    return out;
}