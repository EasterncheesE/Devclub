<?php
    class Complex {
        private $real;
        private $imaginary;
        
        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid parameter");
        }
        
        public function __construct($real = 0, $imaginary = 0) {
            $this->real = $this->validate($real);
            $this->imaginary = $this->validate($imaginary);
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function equals(Complex $other) {
            return $this->real == $other->real && $this->imaginary == $other->imaginary;
        }
        
        public function incrementBy(Complex $other) {
            $this->real += $other->real;
            $this->imaginary += $other->imaginary;
        }
        
        public function decrementBy(Complex $other) {
            $this->real -= $other->real;
            $this->imaginary -= $other->imaginary;
        }
        
        public function plus(Complex $other) {
            $temp = new Complex;
            
            $temp->real = $this->real + $other->real;
            $temp->imaginary = $this->imaginary + $other->imaginary;
            
            return $temp;
        }
        
        public function minus(Complex $other) {
            $temp = new Complex;
            
            $temp->real = $this->real - $other->real;
            $temp->imaginary = $this->imaginary - $other->imaginary;
            
            return $temp;
        }
        
        public function multiply(Complex $other) {
            $temp = new Complex;
            
            $temp->real = $this->real * $other->real - $this->imaginary * $other->imaginary;
            $temp->imaginary = $this->real * $other->imaginary + $this->imaginary * $other->real;
            
            return $temp;
        }
        
        public function __toString() {
            if ( $this->imaginary == 0 ) {
                return sprintf("%g", $this->real);
            } else if ( $this->real == 0 ) {
                return sprintf("%g", $this->imaginary) . 'i';
            }
            return sprintf("%g%+g", $this->real, $this->imaginary) . 'i';
        }
    }
    
    $a = new Complex(5.5, 1.0);
    $b = new Complex(2.0, 05.0);
    $c = clone $b;
    
    echo "a: " . $a . PHP_EOL;
    echo "b: " . $b . PHP_EOL;
    echo "c: " . $c . PHP_EOL;
    
    $a->incrementBy($b);
    
    if ( $a->equals($b) ) {
        echo $a . " = " . $b . PHP_EOL;
    } else {
        echo $a . " != " . $b . PHP_EOL;
    }
    
    $b->decrementBy($a);
    
    echo "a * b  = " . $a->multiply($b) . PHP_EOL;
    
?>