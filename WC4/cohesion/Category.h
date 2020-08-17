#ifndef CATEGORY_H
#define CATEGORY_H

#include <iostream>
#include <vector>
#include "Item.h"

class Item;

class Category {
public:
    std::string categoryName;
    std::vector<Item*>* itemList;
    
    Category(std::string categoryName);
    ~Category();
    
    std::string getCategoryName();
    void getItemList();
    
    void addItem(Item* item);
    void removeItem(Item* item);
};

std::ostream& operator<<(std::ostream& out, Category* category);

#endif // CATEGORY_H