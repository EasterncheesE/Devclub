<?php
    class Identifiable {
        private $id;
        
        public static $idHolder = 1;
        
        public function __construct() {
            $this->id = self::$idHolder;
            self::$idHolder += 1;
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
    }
    
    $id1 = new Identifiable;
    $id2 = new Identifiable;
    
    echo "1 ID = " . $id1->id . PHP_EOL;
    echo "2 ID = " . $id2->id . PHP_EOL;
    
    $id3 = new Identifiable;
    $id4 = new Identifiable;
    
    echo "3 ID = " . $id3->id . PHP_EOL;
    echo "4 ID = " . $id4->id . PHP_EOL;
?>