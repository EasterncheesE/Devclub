#include "point.h"


Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}
Point::~Point() {}

double Point::getX() const {
    return this->x;
}
double Point::getY() const {
    return this->y;
}

void Point::setX(double value) {
    this->x = value;
}
void Point::setY(double value) {
    this->y = value;
}

double Point::distance(const Point& other) const {
    return hypot (this->x-other.y,this->y-other.y);
}
bool Point::operator==(const Point& other) const {
    return this->x == other.x && this->y == other.y;
}
bool Point::operator!=(const Point& other) const {
    return !((*this) == other);
}


std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}

int main() {
    Point a = Point(5, 10);
    Point b = Point(6, 8);

    std::cout << "Distance between A and B is " << a.distance(b) << std::endl;
    if ( a == b ) {
        std::cout << a << " IS EQUAL TO " << b << std::endl;
    } else {
        std::cout << a << " IS NOT EQUAL TO " << b << std::endl;
    }
    return 0;
}