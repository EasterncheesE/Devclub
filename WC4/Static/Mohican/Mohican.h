#ifndef MOHICAN_H
#define MOHICAN_H

#include <iostream>
#include <vector>
#include "Exceptions.h"

class Mohican {
private:
    static std::vector<Mohican*> mohicans;
    const std::string name;
public:
    Mohican(std::string name);
    ~Mohican();
    
    const std::string& getName() const;
    
    static const Mohican& getLastMohican();
    
    
};

std::ostream& operator<<(std::ostream& out, const Mohican& mohican);

#endif // MOHICAN_H