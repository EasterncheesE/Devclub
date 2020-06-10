#include <iostream>
#include "complex.h"

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}
Complex::~Complex() {}

double Complex::getReal() const {
    return this->real;
}
double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}
bool Complex::operator!=(const Complex& other) const {
    return !((*this) == other);
}
void Complex::operator+=(const Complex& other) {
    this->real += other.real;
    this->imaginary += other.imaginary;
}
void Complex::operator-=(const Complex& other) {
    this->real -= other.real;
    this->real -= other.real;
}
Complex Complex::operator+(const Complex& other) const {
    return Complex(this->real+other.real, this->imaginary+other.imaginary);
}
Complex Complex::operator-(const Complex& other) const {
    return Complex(this->real-other.real, this->imaginary-other.imaginary);
}
Complex Complex::operator*(const Complex& other) const {
    return Complex(this->real*other.real, this->imaginary*other.imaginary);
}
std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << "(" << complex.getReal() << " + " << complex.getImaginary() << "i)";
    return out;
}

int main() {
    Complex a = Complex(50,5);
    Complex b = Complex(50,5);

    if ( a == b ) {
        std::cout << a << " EQUAL TO " << b << std::endl;
    } else {
        std::cout << a << " NOT EQUAL TO " << b << std::endl;
    }
    a += b;
    std::cout << a << std::endl;
    a -= b; 
    std::cout << a << std::endl;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;

    return 0;
}
