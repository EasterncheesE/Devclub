#ifndef FILE_ITER_H
#define FILE_ITER_H

#include <iostream>
#include <string>
#include <fstream>

class FileIter {
private:
    std::ifstream sourceFile;
    std::string current;
public:
    FileIter(std::string path);
    ~FileIter();
    
    bool end();
    
    std::string getCurrent();
    void next();
    
    void operator++();
    void operator++(int);
    
    std::string operator*();
};



#endif // FILE_ITER_H