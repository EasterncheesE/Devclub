<?php
    class Vector {
        private $x;
        private $y;
        
        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid parameters");
        }
        
        public function __construct($x = 0, $y = 0) {
            $this->x = $this->validate($x);
            $this->y = $this->validate($y);
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function __set($name, $value) {
            if ( property_exists($this, $name) ) {
                $this->$name = $this->validate($value);
                return;
            }
            throw new Exception("Error: attribute $name doesn't exist"); 
        }
        
        public function len() {
            return hypot($this->x, $this->y);
        }
        
        public function equals(Vector $other) {
            return $this->x == $other->x && $this->y == $other->y;
        }
        
        public function isTheSameInstance(Vector $other) {
            return $this === $other;
        }
        
        public function incrementBy(Vector $other) {
            $this->x += $other->x;
            $this->y += $other->y;
        }
        
        public function decrementBy(Vector $other) {
            $this->x -= $other->x;
            $this->y -= $other->y;
        }
        
        public function plus(Vector $other) {
            $temp = new Vector;
            
            $temp->x = $this->x + $other->x;
            $temp->y = $this->y + $other->y;
            
            return $temp;
        }
        
        public function minus(Vector $other) {
            $temp = new Vector;
            
            $temp->x = $this->x - $other->x;
            $temp->y = $this->y - $other->y;
            
            return $temp;
        }
        
        public function __toString() {
            return sprintf("(%g, %g)", $this->x, $this->y);
        }
    }
    
    $a = new Vector(5.1, 19.3);
    $b = new Vector(1.9, 1.3);
    $c = new Vector;
    
    
    $c = clone $b;
    
    $a->decrementBy($c);
    
    echo "a: " . $a . PHP_EOL;
    echo "b: " . $b . PHP_EOL;
    echo "c: " . $c . PHP_EOL;
    
    $a->incrementBy($b);
    
    print "a len:  " . $a->len() . PHP_EOL;
    
    if ( $a->isTheSameInstance($b) ) {
        echo "a is same instance as b" . PHP_EOL;
    } else {
        echo "a is not same istance as b" . PHP_EOL;
    }
    
    $b->incrementBy($c);
    
    if ( $a->equals($b) ) {
        echo $a . " = " . $b . PHP_EOL;
    } else {
        echo $a . " != " . $b . PHP_EOL;
    }
    
    echo "a + b = " . $a->plus($b) . PHP_EOL;
?>