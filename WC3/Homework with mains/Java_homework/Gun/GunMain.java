public class GunMain {
    public static void main(String[] args) throws OutOfRoundsException, NotReadyException {
        Gun glock = new Gun(8,"Glock");
        
        glock.showGunStats();
        System.out.println("");
        
        glock.reload();
        glock.prepare();
        glock.showGunStats();
        System.out.println("");
        
        try {
            glock.shoot();
        } catch (OutOfRoundsException e) {
            System.out.println("Out of Rounds, can't shoot.");
        } catch (NotReadyException e) {
            System.out.println("Not ready, can't shoot.");
        }
        glock.showGunStats();
        System.out.println("");
    }
}