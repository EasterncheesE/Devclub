public class VectorMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Vector a = new Vector(5,5);
        Vector b = a.clone();
        Vector c = b.clone();
        Vector d = new Vector();
        
        
        
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
        System.out.println("d = " + d);
        
        System.out.println("a = " + a);
        System.out.println("b + b = " + b.sum(b));
        System.out.println("b is still " + b);
        System.out.println("b len = " + b.len());
        System.out.println("Equal = " + a.equals(b));
        System.out.println("NotEqual = " + b.notEqual(b));
    }
}