// Разобраться с init.


#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

// void init(Point *a, Point *b) {
//     printf("input a.x and a.y\n");
//     scanf("%g %g", a->x, a->y);
//     printf("input a.x and a.y\n");
//     scanf("%g %g", b->x, b->y);
// }

void pointPrint(Point p) {
    printf("(%g, %g)", p.x, p.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}


int main() {
    Point a;
    Point b;
    // init(&a, &b);
    pointPrint(a);
    pointPrint(b);
    pointEqual(a, b);
    pointDistance(a, b);
    return 0;
}



  // printf("Enter a\n");
    // scanf("%g %g", &x, &y);
    // init(&a, x, y);
    // // printf("Enter b\n");
    // // scanf("%g %g", &x, &y);
    // // init(&b, x, y);