#include "Customer.h"

Customer::Customer(std::string customerName) {
    this->customerName = customerName;
    this->orderList = new std::vector<Order*>;
}
Customer::~Customer() {
    delete this->orderList;
}

std::string Customer::getCustomerName() {
    return this->customerName;
}

void Customer::getOrderList() {
    std::cout << "Customer " << this->customerName << " ordered:" << std::endl;
    std::vector<Order*>::iterator it = orderList->begin();

    for ( int i = 1; it != orderList->end(); it++, i++ ) {
        std::cout << i << ": " << *it << std::endl;
    }
}

void Customer::addOrder(std::string orderName, Item* item) {
    Order* order = new Order(orderName, this, item);
}

void Customer::addOrder(Order* order) {
    this->orderList->push_back(order);
}

std::ostream& operator<<(std::ostream& out, Customer* customer) {
    out << customer->getCustomerName();
    
    return out;
}