#include "Category.h"

Category::Category(std::string categoryName) {
    categories->push_back(this);
    this->categoryName = categoryName;
    this->itemList = new std::vector<Item*>;
}
Category::~Category() {
    delete this->itemList;
    Category::categories->erase(std::remove(categories->begin(), categories->end(), this), categories->end());
}

std::string Category::getCategoryName() {
    return this->categoryName;
}

void Category::getItemList() {
    std::cout << "Category " << this->categoryName << " consists of: " << std::endl;
    std::vector<Item*>::iterator it = itemList->begin();
    
    for ( int i = 1; it != itemList->end(); it++, i++ ) {
        std::cout << i << ": " << *it << std::endl;
    }
}

void Category::addItem(Item* item) {
    this->itemList->push_back(item);
}
void Category::removeItem(Item* item) {
    this->itemList->erase(std::remove(this->itemList->begin(), this->itemList->end(), item), this->itemList->end());
}

void Category::showCategories() {
    std::vector<Category*>::iterator it = Category::categories->begin();
    
    for ( ; it != categories->end(); it++) {
        std::cout << *it << std::endl;
    }
}

std::vector<Category*>* Category::categories = new std::vector<Category*>;

std::ostream& operator<<(std::ostream& out, Category* category) {
    out << category->getCategoryName();
    
    return out;
}