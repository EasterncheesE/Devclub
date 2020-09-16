<?php
require_once('Exceptions.php');

    class Pen {
        private $inkAmount;
        private $inkCapacity;
        
        private function validate($value) {
            if ( is_int($value) && $value > 0 ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }
        
        public function __construct($inkCapacity = 4096) {
            $this->inkCapacity = $this->validate($inkCapacity);
            $this->inkAmount = $inkCapacity;
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function write(Paper $paper, $message) {
            if ( $this->inkAmount == 0 ) {
                throw new OutOfInk("Action error: no ink left");
            }
            
            $spaceLeft = $paper->maxSymbols - $paper->symbols;
            
            if ( strlen($message) > $this->inkAmount && strlen($message) > $spaceLeft ) {
                if ( $this->inkAmount >= $spaceLeft ) {
                    $this->inkAmount -= $spaceLeft;
                    
                    $paper->addContent(substr($message, 0, $spaceLeft));
                } else {
                    $paper->addContent(substr($message, 0, $this->inkAmount));
                    $this->inkAmount = 0;
                    throw new Exception("Action error: no ink left");
                }
            }
            $paper->addContent($message);
            $this->inkAmount -= $paper->symbols - $beforePaperSymbols;
        }
        
        public function refill() {
            $this->inkAmount = $this->inkCapacity;
        }
    }
?>