#include <iostream>
#include <vector>
#include "Customer.h"



int main() {
    Category* food = new Category("food");
    Item* apple = new Item("apple", food);
    Item* orange = new Item("orange", food);
    Item* beef = new Item("beef", food);
    Item* pork = new Item("pork", food);
    Item* cucumber = new Item("cucumber", food);
    Item* tomato = new Item("tomato", food);
    
    Customer* steve = new Customer("Steve");
    Customer* jane = new Customer("Jane");
    
    Order* first = new Order("First", steve, beef);
    Order* second = new Order("Second", jane, tomato);
    
    std::cout << std::endl;
    // CATEGORY FUNCTIONS FUNCTIONS
    std::cout << food << std::endl;
    food->getItemList();
    
    std::cout << std::endl;
    //CUSTOMER FUNCTIONS
    steve->addOrder("Apples", apple);
    steve->addOrder("Cucumbers", cucumber);
    steve->addOrder("Beef", beef);
    steve->addOrder("Pork", pork);
    steve->addOrder("Tomatoes", tomato);
    steve->getOrderList();
    
    jane->addOrder("Apples2", apple);
    jane->addOrder("Cucumbers2", cucumber);
    jane->getOrderList();
    
    

    
    std::cout << std::endl;
    // ORDER FUNCTIONS
    std::cout << "Order " << first->getOrderName() << " was made by " << first->getCustomer() << std::endl;
    std::cout << "Order " << second->getOrderName() << " was made by " << first->getCustomer() << std::endl;
    first->addMerch(orange);
    second->addMerch(pork);
    first->getMerchList();
    second->getMerchList();
    
    steve->getOrderList();
    steve->findOrder(first);
    // std::cout << std::endl;
    // //ITEM FUNCTIONS
    // std::cout << std::endl << apple << std::endl;
    // std::cout << apple->getItemCategory() << std::endl;
    // apple->getOrderList();
    
    
    
    return 0;
}