public class Vector implements Cloneable {
    private double x;
    private double y;
    
    public Vector(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public Vector() {
        this(0.0,0.0);
    }
    
    public double getX() {
        return this.x;
    }
    public double getY() {
        return this.y;
    }
    
    public void setX(double newX) {
        this.x = newX;
    }
    public void setY(double newY) {
        this.y = newY;
    }
    
    public boolean equals(Vector other) {
        return this.x == other.x && this.y == other.y;
    }
    
    public boolean notEqual(Vector other) {
        return !(this.equals(other));
    }
    
    public void increment(Vector other) {
        this.x += other.x;
        this.y += other.y;
    }
    
    public void decrement(Vector other) {
        this.x -= other.x;
        this.y -= other.y;
    }
    
    public Vector sum(Vector other) {
        Vector result = new Vector(0,0);
        
        result.x = this.x + other.x;
        result.y = this.x + other.x;
        return result;
    }
    
    public Vector diff(Vector other) {
        Vector result = new Vector(0,0);
        
        result.x = this.x + other.x;
        result.y = this.x + other.x;
        return result;
    }
    
    public String toString() {
        return "(" + x + ", " + y + ")";
    }
    
    public double len() {
        return Math.hypot(this.x, this.y);
    }
    
    public Vector clone() throws CloneNotSupportedException {
        return (Vector) super.clone();
    }
}