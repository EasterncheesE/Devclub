<?php

    class InvalidDateException extends Exception {}
    class InvalidSeriesException extends Exception {}
    class WrongNumberException extends Exception {}
    class OutOfPassportsException extends Exception {}
    
    class Passport {
        private $passportSeries;
        private $passportNumber;
        private $firstName;
        private $lastName;
        private $day;
        private $month;
        private $year;
        
        
        public static $series_start = "AA";
        public static $series_end = "ZZ";
        public static $number_start = 1;
        public static $number_end = 999999;
        
        public static $currentSeries = "AA";
        public static $currentNumber =  1;
        
        
        private function validate($value) {
            if ( is_int($value) && $value > 0 ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }
        
        private function validateDate($day, $month, $year) {
            $daysInMonth = array(31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31);
                
                if ( $year % 400 == 0 || ($year % 4 == 0 && $year % 100 != 0) ) {
                    $daysInMonth[1] = 29;
                }
                if ( $day < 1 || $month < 1 || $year < 1 ) {
                    throw new InvalidDateException("day, month or year cannot be < 1.");
                }
                if ( $month > 12 ) {
                    throw new InvalidDateException("There are only 12 month in year.");
                }
                if ( $day > $daysInMonth[$month-1] ) {
                    throw new InvalidDateException("There are not so many days in this month.");
                }
                if ( $year > 300000000 ) {
                    throw new InvalidDateException("Are you going to live forever?");
                }
        }
        
        public function __construct($firstName, $lastName, $day, $month, $year) {
            $this->firstName = $firstName;
            $this->lastName = $lastName;
            try {
                $this->validateDate($day, $month, $year);
                $this->setDateOfBirth($day, $month, $year);
            } catch (Exception $e) {
                echo $e->getMessage() . PHP_EOL;
                $this->setDateOfBirth(1,1,1970);
            }

            
            if ( self::$currentNumber + 1 > self::$number_end ) {
                echo
                self::nextCurrentSeries();
            } else {
            self::$currentNumber += 1; 
            }
            $this->passportSeries = self::$currentSeries;
            $this->passportNumber = self::$currentNumber;
        }
        
        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Error: attribute $name doesn't exist");
        }
        
        private function setDateOfBirth($day, $month, $year) {
            $this->day = $day;
            $this->month = $month;
            $this->year = $year;
        }
        
        public static function getCurrentSeries() {
            return self::$currentSeries;
        }
        
        public static function getCurrentNumber() {
            return self::$currentNumber;
        }
        
        public static function nextCurrentSeries() {
            echo "NEXT CURRENT SERIES" . PHP_EOL;
            
            if ( self::$currentSeries == self::$series_end ) {
                throw new OutOfPassportsException("Out of possible passport numbers and series");
            }
            self::$currentSeries++;
            self::$currentNumber = self::$number_start;
            ;
        }
        
        public static function setCurrentSeries($series) {
            if ( strlen($series) != 2 ) {
                throw new InvalidSeriesException("Series mush contain 2 characters only");
            }
            if ( $series < self::$series_start || $series > self::$series_end ) {
                throw new InvalidSeriesException("This is not valid passport series");
            }

            self::$currentSeries = $series;
            self::$currentNumber = self::$number_start;
        }
        
        public static function setCurrentNumber($number) {
            if ( $number < self::$number_start || $number > self::$number_end ) {
                throw new WrongNumberException("Numbers should be in range 1 - 999999");
            } else {
                self::$currentNumber = $number;
            }
        }
        public function __toString() {
            $out = "";
            
            $out .= sprintf("%s %s", $this->firstName, $this->lastName) . PHP_EOL;
            $out .= "Date of birth: " . $this->day . "." . $this->month . "." . $this->year . PHP_EOL;
            $out .= "Passport No: " . $this->passportSeries . str_pad($this->passportNumber, 6, "0", STR_PAD_LEFT) . PHP_EOL;
            
            return $out;
        }
    }
    
    try {
        $p1 = new Passport("Vasya", "Pupkin", 2,2,2000);
        echo $p1 . PHP_EOL;
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }

    try {
        Passport::setCurrentNumber(999999);
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }

    try {
        $p2 = new Passport("Petya", "Pyatkin", 3,3,2003);
        echo $p2 . PHP_EOL;
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }

    try {
        $p3 = new Passport("Fedya", "Fedorov", 1,1,1990);
        echo $p3 . PHP_EOL;
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }


    try {
        Passport::nextCurrentSeries();
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    echo Passport::$currentSeries . PHP_EOL;

    Passport::setCurrentSeries("ZZ");
    Passport::setCurrentNumber(999999);
    
    try {
        echo "fourth" . PHP_EOL;
        $p4 = new Passport("F", "F", 1,1,1997);
        echo $p4 . PHP_EOL;
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    
    echo Passport::$currentSeries . PHP_EOL;
    
    echo Passport::$currentSeries . PHP_EOL;
    echo Passport::$currentNumber . PHP_EOL;
?>