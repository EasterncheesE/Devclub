public class CarMain {
    public static void main(String[] args) throws OutOfFuelException, TooMuchFuelException {
        Car volvo = new Car(20,1,new Point(0.0,0.0),"Volvo");
        Point resort = new Point(10,10);
        
        System.out.println(volvo);
        
        try {
            volvo.refill(20);
        } catch (TooMuchFuelException e) {
            System.out.println("Too much fuel!");
        }
        System.out.println(volvo);
        
        try { 
            volvo.drive(50,50);
        } catch (OutOfFuelException e) {
            System.out.println("Not enough fuel");
        }
        System.out.println(volvo);
        try { 
            volvo.drive(resort);
        } catch (OutOfFuelException e) {
            System.out.println("Not enough fuel");
        }
        System.out.println(volvo);
        volvo.refill();
        System.out.println(volvo);
    }
}