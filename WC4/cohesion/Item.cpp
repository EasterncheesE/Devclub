#include "Item.h"

Item::Item(std::string itemName, Category* itemCategory) {
    this->itemName = itemName;
    this->itemCategory = itemCategory;
    this->orderList = new std::vector<Order*>;
    itemCategory->addItem(this);
}
Item::~Item() {
    delete this->orderList;
}


std::string Item::getItemName() {
    return this->itemName;
}

Category* Item::getItemCategory() {
    return this->itemCategory;
}

void Item::getOrderList() {
    std::cout << "Item " << this->itemName << " is a part of these orders: " << std::endl; 
    std::vector<Order*>::iterator it = this->orderList->begin();

    for ( int i = 1; it != orderList->end(); it++, i++ ) {
    std::cout << i << ": " << *it << std::endl;
    }

}
void Item::addOrder(Order* order) {
    this->orderList->push_back(order);
}
void Item::removeOrder(Order* order) {
    this->orderList->erase(std::remove(this->orderList->begin(), this->orderList->end(), order), this->orderList->end());
}


std::ostream& operator<<(std::ostream& out, Item* item) {
    out << item->getItemName();
    return out;
}
