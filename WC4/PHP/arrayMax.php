<?php
    function arrayMax(&$array) {
        return max($array);
    }
    
    
    $array = [5, 100, 4, 50, -10, 0, 1, 2, 22];
    
    echo arrayMax($array) . PHP_EOL;
    
?>