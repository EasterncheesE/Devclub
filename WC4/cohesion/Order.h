#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <vector>
#include "Customer.h"
#include "Item.h"

class Customer;
class Item;

class Order {
private:
    static std::vector<Order*>* orders;
public:
    std::string orderName;
    Customer* customer;
    std::vector<Item*>* merchList;
    
    Order(std::string orderName, Customer* customer, Item* firstMerch);
    ~Order();
    
    std::string getOrderName();
    Customer* getCustomer();
    void getMerchList();
    
    void addMerch(Item* merch);
    void removeMerch(Item* merch);
    
    static void showOrders();
    
};

std::ostream& operator<<(std::ostream& out, Order* order);


#endif // ORDER_H