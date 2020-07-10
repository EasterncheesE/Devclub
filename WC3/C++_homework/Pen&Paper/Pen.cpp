#include "Pen.h"

Pen::Pen(int inkCapacity) {
    this->inkAmount = 0;
    this->inkCapacity = inkCapacity;
}
Pen::~Pen() {}

int Pen::getInkAmount() const {
    return this->inkAmount;
}
int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    int length = message.size();
    int paperCapacity = paper.getMaxSymbols() - paper.getSymbols();

    if ( this->inkAmount >= length && paperCapacity >= length ) {
        this->inkAmount -= length;
        paper.addContent(message);
        return;
    } else if ( this->inkAmount > paperCapacity ) {
        std::string cutMessage = message.substr(0, this->inkAmount);

        this->inkAmount -= paperCapacity;
        paper.addContent(cutMessage);
        return;
    } else if ( this->inkAmount < paperCapacity ) {
        std::string cutMessage = message.substr(0,this->inkAmount);

        this->inkAmount = 0;
        paper.addContent(cutMessage);
        throw OutOfInk();
    }
    this->inkAmount = 0;
    paper.addContent(message);
    std::cout << "NOPE" << std::endl;
    throw OutOfInk();
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}



