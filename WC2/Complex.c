#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    Complex multiple;
    
    multiple.re = this->re * other.re - this->im * other.im;
    multiple.im = this->im * other.re + this->re * other.im;
    this->re = multiple.re;
    this->im = multiple.im;
}

Complex complexSum(Complex a, Complex b) {
    a.re += b.re;
    a.im += b.im;
    return a;
}

Complex complexDiff(Complex a, Complex b) {
    a.re -= b.re;
    a.im -= b.im;
    return a;
}

Complex complexProduct(Complex a, Complex b) {
    Complex product;
    
    product.re = a.re * b.re - a.im * b.im;
    product.im = a.im * b.re + a.re * b.im;
    return product;
}

int complexEqual(Complex a, Complex b) {
    if ( a.re == b.re && a.im == b.im ) {
        return 1;
    }
    return 0;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    if ( this.im < 0 ) {
        printf("%g-%gi", this.re, this.im);
    } else {
        printf("%g+%gi", this.re, this.im);
    }
}

int main() {
    Complex this;
    Complex other;
    Complex sum, diff, product;
    int equal;
    
    this.re = 5;
    this.im = 2;
    other.re = 3;
    other.im = 4;
    
    complexIncrement(&this, other);
    printf("INCREMENT: %g+%gi\n", this.re, this.im);
    complexDecrement(&this, other);
    printf("DECREMENT: %g+%gi\n", this.re, this.im);
    complexMultiply(&this, other);
    printf("MULTIPLY: %g+%gi\n", this.re, this.im);
    this.re = 2;
    this.im = 2;
    other.re = 2;
    other.im = 2;
    
    sum = complexSum(this, other);
    printf("SUM: %g+%gi\n", sum.re, sum.im);
    diff = complexDiff(this, other);
    printf("DIFF: %g+%gi\n", diff.re, diff.im);
    product = complexProduct(this, other);
    printf("PROD: %g+%gi\n", product.re, product.im);
    equal = complexEqual(this, other);
    printf("EQ: %d\n\n", equal);
    complexPrint(this);
    return 0;
}
