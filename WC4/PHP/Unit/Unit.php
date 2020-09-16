<?php
    class UnitIsDead extends Exception {}
    
    class Unit {
        private $dmg;
        private $hp;
        private $hpMax;
        private $name;
        
        private function validate($value) {
            if ( is_int($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }
        
        private function ensureIsAlive() {
            if ( $this->hp == 0 ) {
                throw new UnitIsDead("Unit " . $this->name . " is dead");
            }
        }
        
        public function __construct($name, $hp, $dmg) {
            $this->name = $name;
            $this->hp = $this->validate($hp);
            $this->hpMax = $hp;
            $this->dmg = $this->validate($dmg);
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function addHp($hp) {
            echo "Healing " . $this->name . PHP_EOL;
            
            if ( $hp <= 0 ) {
                return;
            }
            
            $this->ensureIsAlive();
            
            if ( $this->hp + $hp > $this->hpMax ) {
                $this->hp = $this->hpMax;
            } else { 
                $this->hp += $hp;
            }
        }
        
        public function takeDamage($dmg) {
            if ( $dmg <= 0 ) {
                return;
            }
            $this->ensureIsAlive();
            
            if ( $this->hp - $dmg > 0 ) {
                $this->hp -= $dmg;
            } else {
                $this->hp = 0;
            }
        }
        
        public function attack(Unit $enemy) {
            echo $this->name . " is attacking " . $enemy->name . PHP_EOL;
            
            $this->ensureIsAlive();
            $enemy->ensureIsAlive();
            
            $enemy->takeDamage($this->dmg);
            
            if ( $enemy->ensureIsAlive() ) {
                $enemy->counterAttack($this);
            }
        }
        
        public function counterAttack(Unit $enemy) {
            $this->ensureIsAlive();
            $enemy->ensureIsAlive();
            
            $enemy->takeDamage($this->dmg / 2);
        }
        
        public function __toString() {
            $out = "";
            
            $out .= "Name: " . $this->name . PHP_EOL;
            $out .= "dmg: " . $this->dmg . PHP_EOL;
            $out .= "hp: " . $this->hp . "/" . $this->hpMax . PHP_EOL;
            if ( $this->hp > 0) {
                $out .= "Alive" . PHP_EOL;
            } else {
                $out .= "Dead" . PHP_EOL;
            }
            
            return $out;
        }
    }
    
    $u1 = new Unit("Vasya", 100, 50);
    $u2 = new Unit("Petya", 125, 40);
    
    echo $u1 . PHP_EOL;
    echo $u2 . PHP_EOL;
    
    try {
        $u1->attack($u2);
        $u2->attack($u1);
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    
    echo $u1 . PHP_EOL;
    echo $u2 . PHP_EOL;
    
    try {
        $u2->addHp(100); 
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    
    
    try {
        $u2->attack($u1);   
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    
    echo "#######################" . PHP_EOL;
    echo $u1 . PHP_EOL;
    echo $u2 . PHP_EOL;
?>