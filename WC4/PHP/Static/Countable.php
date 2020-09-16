<?php
    class _Countable {
        private static $count = 0;
        
        public function __construct() {
            self::$count += 1;
        }
        
        public function __destruct() {
            self::$count -= 1;
        }
        
        public function __set($name, $value) {
            throw new Exception("Action error: attribute change not allowed");
        }
        
        public static function getCount() {
            return _Countable::$count;
        }
    }
    
    echo _Countable::getCount() . PHP_EOL;
    
    $c1 = new _Countable;
    echo _Countable::getCount() . PHP_EOL;
    
    echo PHP_EOL;
    
    $c2 = new _Countable;
    echo _Countable::getCount() . PHP_EOL;
    
    echo PHP_EOL;
    
    unset($c2);
    echo _Countable::getCount() . PHP_EOL;
?>