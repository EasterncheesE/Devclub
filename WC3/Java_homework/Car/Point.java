public class Point implements Cloneable {
    private double x;
    private double y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Point() {
        this(0.0, 0.0);
    }

    public double getX() {
        return this.x;
    }

    public double getY() {
        return this.y;
    }

    public void setX(double value) {
        this.x = value;
    }

    public void setY(double value) {
        this.y = value;
    }

    public boolean equals(Point other) {
        return this.x == other.x && this.y == other.y;
    }

    public String toString() {
        return "(" + this.x + ", " + this.y + ")";
    }

    public double distance(Point other) {
        return Math.hypot(this.x - other.x, this.y - other.y);
    }

    public Point clone() throws CloneNotSupportedException {
        return (Point) super.clone();
    }
}
