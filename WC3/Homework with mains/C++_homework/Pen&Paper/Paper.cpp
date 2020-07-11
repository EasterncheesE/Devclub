#include "Paper.h"

Paper::Paper(int maxSymbols) {
    if (maxSymbols < 0) {
        maxSymbols = 0;
    }
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
    this->content.resize(maxSymbols);
    this->content = "";
}
Paper::~Paper() {}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}
int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    int length = message.size();
    int paperCapacity = this->maxSymbols - this->symbols;

    if ( paperCapacity < length ) {

        this->content = message.substr(0, paperCapacity);
        this->symbols += paperCapacity;
        throw OutOfSpace();
    } else {
        this->content += message + "\n";
        this->symbols += message.size();
        
    }
}
void Paper::show() const {
    std::cout <<  "Paper contents = " << this->content << std::endl;
}
