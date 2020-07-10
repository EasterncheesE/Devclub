public class UnitMain {
    public static void main(String[] args) throws UnitIsDeadException {
        Unit bobby = new Unit("Bobby", 100, 12);
        Unit dave = new Unit("Dave", 150, 10);
        
        System.out.println(bobby);
        System.out.println(dave);
        
        for ( int i = 0; dave.getHitPoints() > 1 && bobby.getHitPoints() > 1; i++) {
            System.out.println("CYCLE NO:" + i);
            bobby.attack(dave);
            dave.counterAttack(bobby);
            System.out.println("\n");
            
            dave.addHitPoints(1);
            dave.attack(bobby);
            bobby.counterAttack(dave);
        
            System.out.println("\n__________________");
            System.out.println(bobby);
            System.out.println(dave);
            System.out.println("__________________\n");
        }
        bobby.addHitPoints(100);
        dave.addHitPoints(500);
    }
}