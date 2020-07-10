public class Complex implements Cloneable {
    double real;
    double imaginary;
    
    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }
    public Complex() {
        this(0,0);
    }
    
    public double getReal() {
        return this.real;
    }
    
    public double getImaginary() {
        return this.imaginary;
    }
    
    public void setReal(double value) {
        this.real = value;
    }
    
    public void setImaginary(double value) {
        this.imaginary = value;
    }
    
    public boolean equals(Complex other) {
        return this.real == other.real && this.imaginary == other.imaginary;
    }
    
    public boolean notEqual(Complex other) {
        return !(this.equals(other));
    }
    
    public void increment(Complex other) {
        this.real += other.real;
        this.imaginary += other.imaginary;
    }
    
    public void decrement(Complex other) {
        this.real -= other.real;
        this.imaginary -= other.imaginary;
    }
    
    public void multiply(Complex other) {
        Complex multiple = new Complex();
        
        multiple.real = this.real * other.real - this.imaginary * other.imaginary;
        multiple.imaginary = this.imaginary * other.real + this.real * other.imaginary;
        this.real = multiple.real;
        this.imaginary = multiple.imaginary;
    }
    
    
    public Complex sum(Complex other) {
        Complex result = new Complex();
        
        result.real = this.real + other.real;
        result.imaginary = this.imaginary + other.imaginary;
        return result;
    }
    public Complex diff(Complex other) {
        Complex result = new Complex();
        
        result.real = this.real - other.real;
        result.imaginary = this.imaginary - other.imaginary;
        return result;
    }
    
    public String toString() {
        return "(" + this.real + " + " + this.imaginary + "i)";
    }
    
    public Complex clone() throws CloneNotSupportedException {
        return (Complex) super.clone();
    }
}
