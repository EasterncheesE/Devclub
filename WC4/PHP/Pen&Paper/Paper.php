<?php
require_once('Exceptions.php');

    class Paper {
        private $maxSymbols;
        private $symbols;
        private $content;
        
        private function validate($value) {
            if ( is_int($value) && $value > 0 ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }
        
        public function __construct($maxSymbols = 4096) {
            $this->maxSymbols = $this->validate($maxSymbols);
            $this->symbols = 0;
            $this->content = "";
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function addContent($message) {
            $spaceLeft = $this->maxSymbols - $this->symbols;
            
            if ( strlen($message) > $spaceLeft) {
                $text = substr($message, 0, $spaceLeft);
                $this->content .= $text;
                $this->symbols += strlen($text);
                throw new OutOfSpace("Error: no space left");
            }
            $this->content .= $message;
            $this->symbols += strlen($message);
        }
        
        public function show() {
            echo $this->content . PHP_EOL;
        }
    }
?>