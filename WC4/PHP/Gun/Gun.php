<?php
    class OutOfRounds extends Exception {}
    class NotReady extends Exception {}

    class Gun {
        private $ammoAmount;
        private $ammoCapacity;
        private $isReady;
        private $model;
        private $totalShots;
        
        public function validate($value) {
            if ( is_int($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }
        
        public function __construct($model = "Beretta", $ammoCapacity = 8) {
            $this->model = $model;
            $this->ammoCapacity = $this->validate($ammoCapacity);
            $this->ammoAmount = 0;
            $this->isReady = false;
            $this->totalShots = 0;
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function ready() {
            return $this->isReady;
        }
        
        public function prepare() {
            if ( !$this->isReady ) {
                $this->isReady = !$this->isReady;
            }
        }
        
        public function reload() {
            $this->ammoAmount = $this->ammoCapacity;
        }
        
        public function shoot() {
            if ( !$this->isReady ) {
                throw new NotReady("Not ready");
            }
            if ( $this->ammoAmount == 0 ) {
                throw new OutOfRounds("Out of rounds!");
            }
            $this->ammoAmount -= 1;
            $this->totalShots += 1;
            echo "Bang!" . PHP_EOL;
        }
        
        public function __toString() {
            $out = "";
            
            $out .= "Model:" . sprintf("%s", $this->model) . '.' . PHP_EOL;
            $out .= "Ammo: " . $this->ammoAmount . "/" . $this->ammoCapacity . PHP_EOL;
            $out .= "Shots fired:" . $this->totalShots . PHP_EOL;
            
            return $out;
        }
    }
    
    $gun = new Gun;
    $eagle = new Gun("Eagle", 6);
    
    echo $gun . PHP_EOL;
    echo $eagle . PHP_EOL;
    
    $eagle->reload();
    $eagle->prepare();
    
    $eagle->shoot();
    echo PHP_EOL;
    
    echo $gun . PHP_EOL;
    echo $eagle . PHP_EOL;
    
    try {
        $eagle->shoot();
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    try {
        $gun->shoot();
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
?>