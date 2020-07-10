#include <iostream>
#include <cmath>

struct Point {
    private:
        int x;
        int y;

    public:
        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }

        int getX() const {
            return this->x;
        }

        int getY() const {
            return this->y;
        }

        void setX(int x) {
            this->x = x;
        }

        void setY(int y) {
            this->y = y;
        }

        bool operator==(const Point& other) const {
            return this->x == other.x && this->y == other.y;
        }

        bool operator!=(const Point& other) const {
            return !((*this) == other);
        }

        double distance(const Point& other) const {
            return hypot(this->x - other.x, this->y - other.y);
        }
};


std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << "(" << p.getX() << ", " << p.getY() << ")";
    return out;
}

int main() {
    Point a = Point(10, 9);
    Point b = Point(11, 8);


    if ( a == b ) {
        std::cout << a << " == " << b << std::endl;
    } else {
        std::cout << a << " != " << b << std::endl;
    }

    std::cout << a.distance(b) << std::endl;


    return 0;
}