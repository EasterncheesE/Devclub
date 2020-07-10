public class Gun implements Cloneable {
    private int amount;
    private int capacity;
    private int totalShots;
    private boolean isReady;
    private String model;
    
    public Gun(int capacity, String model) {
        this.amount = 0;
        this.capacity = capacity;
        this.totalShots = 0;
        this.model = model;
        this.isReady = false;
    }
    
    public int getAmount() {
        return this.amount;
    }
    public int getCapacity() {
        return this.capacity;
    }
    public boolean ready() {
        return this.isReady;
    }
    public String getModel() {
        return this.model;
    }
    
    public int getTotalShots() {
        return this.totalShots;
    }
    
    public void prepare() {
        this.isReady = !this.isReady;
    }
    
    public void reload() {
        this.amount = capacity;
    }
    
    public void shoot() throws OutOfRoundsException, NotReadyException {
        System.out.println("Shooting");
        if ( !this.ready() ) {
            throw new NotReadyException();
        }
        if ( this.amount < 1 ) {
            throw new OutOfRoundsException();
        }
        this.amount -= 1;
        this.totalShots += 1;
        System.out.println("Bang!");
    }
    public void showGunStats() {
        System.out.println("Gun model: " + this.model);
        System.out.println("Capacity: " + this.amount + "/" + this.capacity);
        System.out.println("Is ready: " + this.isReady);
        System.out.println("Total Shots fired: " + this.totalShots);
    }
}