<?php
    class Point {
        private $x, $y;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($x=0, $y=0) {
            $this->x = $this->validate($x);
            $this->y = $this->validate($y);
        }

        public function __get($name) {
            return $this->$name;
        }

        public function __set($name, $value) {
            $this->$name = $this->validate($value);
        }
        
        public function add($other) {
            $this->x += $other->x;
            $this->y += $other->y;
        }
        public function substract($other) {
            $this->x -= $other->x;
            $this->y -= $other->y;
        }
        

        public function distance(Point $other) {
            return hypot($this->x-$other->x, $this->y-$other->y);
        }

        public function __toString() {
            return sprintf("(%g, %g)", $this->x, $this->y);
        }
    }

    function compare($x, $y) {
        if ( $x == $y ) {
            echo $x . " = " . $y . PHP_EOL;
        } else {
            echo $x . " = " . $y . PHP_EOL;
        }
    }

    function isTheSameInstance($x, $y) {
        if ( $x === $y ) {
            echo $x . " and " . $y . " are same instance" . PHP_EOL;
        } else {
            echo $x . " and " . $y . " are different instance" . PHP_EOL;
        }
    }
?>