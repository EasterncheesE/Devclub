#include <iostream>
#include <cmath>

struct Point {
    private:
    double x;
    double y;
    char name;
    
    public:
    Point(int x, int y, char name) {
        this->x = x;
        this->y = y;
        this->name = name;
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
    
    void operator+=(Point& other) {
        this->x += other.x;
        this->y += other.y;
    }
    void operator-=(Point& other) {
        this->x -= other.x;
        this->y -= other.y;
    }
    bool operator==(const Point& other) {
        return this->x == other.x && this->y == other.y;
    }
    Point operator+(Point& other) {
        Point buffer(0,0,'B');
        
        buffer.x = this->x + other.x;
        buffer.y = this->y + other.y;
        return buffer;
    }
    Point operator-(Point& other) {
        Point buffer(0,0,'B');
        
        buffer.x = this->x - other.x;
        buffer.y = this->y - other.y;
        return buffer;
    }
    double VectorLen() {
        return hypot (this->x, this->y);
    }
    void VectorPrint() {
        std::cout << this->name << ".x = " << this->x << ", " << this->name << ".y =" << this->y << std::endl; 
    }
    
};

std::ostream& operator<<(std::ostream& out, const Point& p) {
    out << "(" << p.getX() << ", " << p.getY() << ")";
    return out;
}

int main() {
    Point a = Point(1,10,'a');
    Point b = Point(5,10,'b');
    Point c = a + b;
    
    a += b;
    std::cout << a << std::endl;
    a -= b;
    std::cout << a << std::endl;
    if ( a == b ) {
        std::cout << " a == b" << std::endl;
    } else {
        std::cout << "a != b" << std::endl;
    }
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a.VectorLen() << std::endl;
    a.VectorPrint();
    b.VectorPrint();
    
    return 0;
}
