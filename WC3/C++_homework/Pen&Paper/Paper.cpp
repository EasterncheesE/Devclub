#include "Paper.h"

Paper::Paper(int maxSymbols) {
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
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
    int length;
    
    for ( ; strcmp(message) == "\0"; length++ );
    if ( this->maxSymbols - this->symbols > 0 ) {
        this->content += message;
        this->symbols += length;
    } else {
        throw Outofspace();
    }
}
void Paper::show() const {
    std::cout << this->content << std::endl;
}
