#ifndef COUNTABLE_H
#define COUNTABLE_H

class Countable {
private:
    static int counter;
public:
    Countable();
    virtual ~Countable();
    
    static const int& getCounter();
};




#endif // COUNTABLE_H