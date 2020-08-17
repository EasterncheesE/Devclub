#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <iostream>
#include "Order.h"

class Order;
class Item;

class Customer {
public:
    std::string customerName;
    std::vector<Order*>* orderList;
    
    Customer(std::string customerName);
    ~Customer();
    
    std::string getCustomerName();
    void getOrderList();
    
    void addOrder(std::string orderName, Item* item);
    void addOrder(Order* order);
    
};

std::ostream& operator<<(std::ostream& out, Customer* customer);

#endif // CUSTOMER_H