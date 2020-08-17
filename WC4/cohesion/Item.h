#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <vector>
#include "Category.h"
#include "Order.h"

class Category;
class Order;

class Item {
public:
    std::string itemName;
    std::vector<Order*>* orderList;
    Category* itemCategory;
    
    Item(std::string itemName, Category* itemCategory);
    ~Item();
    
    std::string getItemName();
    Category* getItemCategory();
    void getOrderList();
    
    void addOrder(Order* order);
    void removeOrder(Order* order);
};

std::ostream& operator<<(std::ostream& out, Item* item);

#endif // ITEM_H