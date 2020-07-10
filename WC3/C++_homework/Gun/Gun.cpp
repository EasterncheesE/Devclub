#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    if ( capacity < 1 ) {
        capacity = 1;
    }
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}
Gun::~Gun() {}

int Gun::getAmount() const {
    return this->amount;
}
int Gun::getCapacity() const {
    return this->capacity;
}
bool Gun::ready() const {
    return this->isReady;
}
const std::string& Gun::getModel() const {
    return this->model;
}
int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    this->isReady = !(this->ready);
}

void Gun::reload() {
    this->isReady = false;
    this->amount = this->capacity;
}

void Gun::shoot() {
    if ( this->isReady == false ) {
        throw NotReady();
    } else if ( this->amount == 0 ) {
        throw OutOfRounds();
    } else {
        std:: cout << "Bang!" << std::endl;
        this->amount -= 1;
        this->totalShots += 1;
    }
}

std::ostream& Gun::operator<<(std::ostream& out, const Gun& gun) {
    std::string isSafe;
    if ( gun.ready() != true) {
        isSafe = "yes";
    } else {
        isSafe = "no";
    }
    out << "Model: " << gun.getModel() << std::endl << "Ammo: " << gun.getAmount() << "/" << gun.getCapacity() << std::endl << "Is safe: " << isSafe << std::endl << "TotalShots fired: " << gun.getTotalShots() << std::endl;
    return out;
}
