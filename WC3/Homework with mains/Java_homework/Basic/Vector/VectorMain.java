public class VectorMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Vector a = new Vector(5,5);
        Vector b = a.clone();
        Vector c = b.clone();
        Vector d = new Vector();
        Vector e = new Vector();
        
        System.out.println("b = " + b + ". e = " + e);
        b.setX(100);
        System.out.println("b = " + b + ". e = " + e);        
        e = b;
        System.out.println("b = " + b + ". e = " + e);
        b.setX(500);
        System.out.println("b = " + b + ". e = " + e);

        // System.out.println("a = " + a);
        // System.out.println("b = " + b);
        // System.out.println("c = " + c);
        // System.out.println("d = " + d);
        
        // System.out.println("a = " + a);
        // System.out.println("b + b = " + b.sum(b));
        // System.out.println("b is still " + b);
        // System.out.println("b len = " + b.len());
        // System.out.println("Equal = " + a.equals(b));
        // System.out.println("NotEqual = " + b.notEqual(b));
    }
}