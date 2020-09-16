<?php
    class Mohican {
        private $name;
        private static $mohicans = array();
        
        public function __construct($name) {
            $this->name = $name;
            array_push(self::$mohicans, $this);
        }
        
        public function __destruct() {
            if ( ($key = array_search($this, self::$mohicans)) !== false ) {
                unset(self::$mohicans[$key]);
            }
            unset($this);
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute $name not found");
        }
        
        public function __set($name, $value) {
            throw new Exception("Action error: attribute change not allowed");
        }
        
        public static function lastOfMohicans() {
            return array_values(array_slice(self::$mohicans, -1))[0];
        }
        
        public function __toString() {
            return sprintf("%s", $this->name);
        }
    }
    function delete(Mohican $obj) {
        $obj->__destruct();
    }
    
    $m1 = new Mohican("One");
    $m2 = new Mohican("Two");
    $m3 = new Mohican("Three");
    $m4 = new Mohican("Four");
    
    echo "1 = " . $m1->name . PHP_EOL;
    echo "2 = " . $m2->name . PHP_EOL;
    echo "3 = " . $m3->name . PHP_EOL;
    echo "4 = " . $m4->name . PHP_EOL;
    
    echo "Last one: " . Mohican::lastOfMohicans() . PHP_EOL;
    
    delete($m2);
    delete($m3);
    delete($m4);
    
    echo "Last one: " . Mohican::lastOfMohicans() . PHP_EOL;
    
    $m5 = new Mohican("Five");
    
    echo "Last one: " . Mohican::lastOfMohicans() . PHP_EOL;
    delete($m5);
    echo PHP_EOL . "Last one: " . Mohican::lastOfMohicans() . PHP_EOL;
?>