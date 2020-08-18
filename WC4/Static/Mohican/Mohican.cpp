#include "Mohican.h"


Mohican::Mohican(std::string name) : name(name) {
    mohicans.push_back(this);
}
Mohican::~Mohican() {
    mohicans.erase(std::remove(mohicans.begin(), mohicans.end(), this), mohicans.end());
}

const std::string& Mohican::getName() const {
    return this->name;
}

const Mohican& Mohican::getLastMohican() {
    if ( mohicans.size() == 0 ) {
        throw ZeroAliveMohicansException();
    } else {
        return *(mohicans.back());
    }
}

std::vector<Mohican*> Mohican::mohicans;

std::ostream& operator<<(std::ostream& out, const Mohican& mohican) {
    out << mohican.getName();
    
    return out;
}