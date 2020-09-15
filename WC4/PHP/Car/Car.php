<?php
    require_once('Point.php');
    
    class OutOfFuel extends Exception {}
    class ToMuchFuel extends Exception {}
    
    class Car {
        private $fuelAmount;
        private $fuelCapacity;
        private $fuelConsumption;
        private $location;
        private $model;
        
        public function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }
        
        public function __construct($capacity = 100, $consumption = 1.0, $location = null, $model="Audi") {
            if ( $this->location == null ) {
                $this->location = new Point(0,0);
            } else {
                $this->location = $location;
            }
            $this->fuelCapacity = $this->validate($capacity);
            $this->fuelAmount = 0;
            $this->fuelConsumption = $this->validate($consumption);
            $this->model = $model;
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function __set($name, $value) {
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        public function drive() {
            if ( func_num_args() == 2 ) {
                $destination = new Point($this->validate(func_get_arg(0)), $this->validate(func_get_arg(1)));
            } else if ( func_num_args() == 1 && func_get_arg(0) instanceof Point ) {
                $destination = func_get_arg(0);
            } else {
                throw new Exception("Invalid param");
            }
            
            $fuelNeeded = $this->location->distance($destination) * $this->fuelConsumption;
            
            if ( $fuelNeeded > $this->fuelCapacity ) {
                throw new OutOfFuel("Drive error: not enough fuel.");
            }
            $this->location = $destination;
            $this->fuelAmount -= $fuelNeeded;
        }
        
        public function refill($fuel) {
            if ( $this->fuelAmount + $fuel > $this->fuelCapacity ) {
                $this->fuelAmount = $this->fuelCapacity;
                throw new ToMuchFuel("Refill error: too much fuel");
            }
            $this->fuelAmount += $fuel;
        }
        
        public function __toString() {
            $out = "";
            
            $out .= "Car model: " . sprintf("%s", $this->model) . PHP_EOL;
            $out .= "Location:  " . $this->location . PHP_EOL;
            $out .= "Fuel: " . sprintf("%g", $this->fuelAmount) . '/' . sprintf("%g", $this->fuelCapacity) . PHP_EOL;
            $out .= "Fuel consumption: " . sprintf("%g", $this->fuelConsumption) . PHP_EOL;
            
            return $out;
        }
    }
    
    $car = new Car;
    $car1 = new Car(200,10, new Point(5,10), "TRUCK");
    
    try {
        $car->drive(50, 100);
    } catch (Exception $e) {
        echo $e->getMessage(). PHP_EOL;
    }
    
    try {
        $car->refill(500);
    } catch (Exception $e) {
        echo $e->getMessage(). PHP_EOL;
    }
    
    $car->drive(new Point(10, 10));
    
    echo $car . PHP_EOL;
    echo $car1 . PHP_EOL;
    
?>