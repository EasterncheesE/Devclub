#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

class Identifiable {
private:
    static int counter;
    static int idCounter;
    int id;
public:
    Identifiable();
    virtual ~Identifiable();
    
    static const int& getCounter();
    static const int& getIdCounter();
    int getId();
    
};


#endif // IDENTIFIABLE_H