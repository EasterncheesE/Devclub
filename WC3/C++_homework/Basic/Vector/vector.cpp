#include <iostream>
#include "vector.h"
#include <math.h>


Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}
Vector::~Vector() {}

double Vector::getX() const {
    return this->x;
}
double Vector::getY() const {
    return this->y;
}

void Vector::setX(double value) {
    this->x = value;
}
void Vector::setY(double value) {
    this->y = value;
}

double Vector::len() const {
    return hypot(this->x,this->y);
}

bool Vector::operator==(const Vector& other) const {
    return this->x == other.x && this->y == other.y;
}
bool  Vector::operator!=(const Vector& other) const {
    return !((*this) == other);
}
void  Vector::operator+=(const Vector& other) {
    this->x += other.x;
    this->y += other.y;
}
void  Vector::operator-=(const Vector& other) {
    this->x -= other.x;
    this->y -= other.y;
}
Vector  Vector::operator+(const Vector& other) const {
    return Vector(this->x+other.x, this->y+other.y);
}
Vector  Vector::operator-(const Vector& other) const {
    return Vector(this->x-other.x, this->y-other.y);
}

std::ostream& operator<<(std::ostream& out, const Vector& vector) {
    out << "(" << vector.getX() << ", " << vector.getY() << ")";
    return out;
}

int main() {
    Vector a = Vector(5.5,5.8);
    Vector b = Vector(2.3,7.0);

    if ( a == b ) {
        std::cout << a << " IS EQUAL TO " << b << std::endl;
    } else {
        std::cout << a << " IS NOT EQUAL TO " << b << std::endl;
    }
    a += b;
    std::cout << a << std::endl;
    a -= b;
    std::cout <<a << std::endl;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;

    return 0;
}
