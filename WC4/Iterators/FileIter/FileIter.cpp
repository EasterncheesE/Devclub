#include "FileIter.h"

FileIter::FileIter(std::string path) {
    this->sourceFile.open(path);
    
    std::getline(this->sourceFile, current);
}
FileIter::~FileIter() {
    this->sourceFile.close();
}

bool FileIter::end() {
    return this->sourceFile.eof();
}

std::string FileIter::getCurrent() {
    return this->current;
}
void FileIter::next() {
    if ( this->end() ) {
        return;
    }
    std::getline(sourceFile, current);
}

void FileIter::operator++() {
    this->next();
}
void FileIter::operator++(int) {
    this->next();
}

std::string FileIter::operator*() {
    return this->getCurrent();
}