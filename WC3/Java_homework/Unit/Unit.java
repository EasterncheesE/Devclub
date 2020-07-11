public class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsMax;
    private String name;
    
    public void ensureIsAlive() throws UnitIsDeadException {
        if (this.hitPoints < 1) {
            throw new UnitIsDeadException("Unit " + this.name + " is dead.");
        }
    }
    
    public Unit(String name, int hp, int dmg) {
        if (hp < 1 ) {
            hp = 1;
        }
        if ( dmg < 0 ) {
            dmg = 0;
        }
        this.hitPointsMax = hp;
        this.hitPoints = hp;
        this.name = name;
        this.damage = dmg;
    }
    public Unit() {
        this.damage = 0;
        this.hitPoints = 1;
        this.hitPointsMax = 1;
        this.name = "Unknow unit";
    }
    
    public int getDamage() {
        return this.damage;
    }
    
    public int getHitPoints() {
        return this.hitPoints;
    }
    
    public int getHitPointsLimit() {
        return this.hitPointsMax;
    }
    public String getName() {
        return this.name;
    }
    
    public void addHitPoints(int hp) throws UnitIsDeadException {
        System.out.println("Healing phase");
        if (hp <= 0) {
            return;
        }
        try { 
            this.ensureIsAlive();

            if (this.hitPoints + hp > this.hitPointsMax) {
                System.out.println(this.name + " heals for " + (this.hitPointsMax - this.hitPoints) + " HP.");
                this.hitPoints = this.hitPointsMax;
            } else {
                this.hitPoints += hp;
                System.out.println(this.name + " heals for " + hp + " HP.");
            }
        } catch (UnitIsDeadException e) {
            System.out.println(e);
        }
    }
    
    public void takeDamage(int dmg) throws UnitIsDeadException {
        if (dmg < 0) {
            dmg = 0;
        }
        try { 
            this.ensureIsAlive();
            
            if (this.hitPoints < dmg) {
                this.hitPoints = 0;
            } else {
                this.hitPoints -= dmg;
            }
            
            if (this.hitPoints < 1) {
                System.out.println(this.name + " took " + dmg + " points of damage. He is dead now.");
            } else {
                System.out.println((this.name + " took " + dmg + " points of damage. HP: " + this.hitPoints + "/" + this.hitPointsMax));
            }
        } catch (UnitIsDeadException e) {
            System.out.println(e);
        }
    }
    
    public void attack(Unit enemy) throws UnitIsDeadException {
        System.out.println(this.name + " attack phase.");
        try {
            this.ensureIsAlive();
            enemy.ensureIsAlive();
            System.out.println(this.name + " is trying to attack " + enemy.name + " for " + this.damage + " damage.");
            enemy.takeDamage(this.damage);
        } catch (UnitIsDeadException e) {
            System.out.println(e);
        }
    }
    
    public void counterAttack(Unit enemy) throws UnitIsDeadException {
        try {
            System.out.println(this.name + " counterattack phase.");
            this.ensureIsAlive();
            enemy.ensureIsAlive();
            System.out.println(this.name + " is counterattacking " + enemy.name + " for " + this.damage/2 + " damage.");
            enemy.takeDamage(this.damage/2);
        } catch (UnitIsDeadException e) {
            System.out.println(e);
        }

    }
    
    public String toString() {
        return "Unit name: " + this.name + "\n" + "HP: " + this.hitPoints + "/" + this.hitPointsMax + "\n" + "Damage: " + this.damage + "\n";
    }
    
}