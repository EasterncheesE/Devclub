#include <iostream>
#include <vector>
#include "Customer.h"
#include "Category.h"
#include "Item.h"
#include "Order.h"

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
// std::cout << std::endl;
// //ITEM FUNCTIONS
// std::cout << std::endl << apple << std::endl;
// std::cout << apple->getItemCategory() << std::endl;
// apple->getOrderList();

std::cout << std::endl << std::endl;

std::cout << "Categories:" << std::endl;
Category::showCategories();
std::cout << std::endl;

std::cout << "Items:" << std::endl;
Item::showItems();
std::cout << std::endl;

std::cout << "Orders:" << std::endl;
Order::showOrders();
std::cout << std::endl;

std::cout << "Customers:" << std::endl;
Customer::showCustomers();
std::cout << std::endl;



return 0;
}