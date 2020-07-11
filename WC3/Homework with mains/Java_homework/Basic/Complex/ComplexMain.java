public class ComplexMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Complex a = new Complex(5,-2);
        Complex b = new Complex(2,-5);
        Complex c = a.clone();
        Complex d = a.sum(b);
        
        System.out.println("A = " + a);
        System.out.println("B = " + b);
        System.out.println("C = " + c);
        System.out.println("D = " + d);
        
        a.multiply(b);
        System.out.println("Now A = " +a);
    }
}