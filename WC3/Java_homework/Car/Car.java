public class Car implements Cloneable {
    private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    Point location;
    String model;
    
    public Car(double capacity, double consumption, Point location, String model) {
        this.fuelAmount = 0;
        this.fuelCapacity = capacity;
        this.fuelConsumption = consumption;
        this.location = location;
        this.model = model;
    }
    public Car() {
        this.fuelAmount = 0;
        this.fuelCapacity = 1;
        this.fuelConsumption = 0.1;
        this.location = new Point(0.0,0.0);
        this.model = "Unknown model";
    }
    
    public double getFuelAmount() {
        return this.fuelAmount;
    }
    
    public double getFuelCapacity() {
        return this.fuelCapacity;
    }
    public double getFuelConsumption() {
        return this.fuelConsumption;
    }
    public Point getLocation() {
        return this.location;
    }
    public String getModel() {
        return this.model;
    }
    
    public void drive(Point destination) throws OutOfFuelException {
        double fuelNeeded = this.location.distance(destination) * this.fuelConsumption;
        
        if ( this.fuelAmount < fuelNeeded ) {
            throw new OutOfFuelException();
        }
        this.location = destination;
        this.fuelAmount -= fuelNeeded;
        System.out.println("Car has arrived to " + destination);
        
    }
    public void drive(double x, double y) throws OutOfFuelException {
        Point destination = new Point(x,y);
        this.drive(destination);
    }
    
    public void refill(double fuel) throws ToMuchFuelException {
        if ( fuel > this.fuelCapacity ) {
            throw new ToMuchFuelException();
        }
        this.fuelAmount += fuel;
    }
    public void refill() {
        this.fuelAmount = this.fuelCapacity;
    }
    
    public String toString() {
        return "\n" + "Car model: " + this.model + "\n" + "Fuel capacity: " + this.fuelAmount + "/" + this.fuelCapacity + "\n" + "Fuel consumption: " + this.fuelConsumption + "\n" + "location: " + this.location + "\n";
    }
}