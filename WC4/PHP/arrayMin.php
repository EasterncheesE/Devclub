<?php
    function arrayMin(&$array) {
        return min($array);
    }
    
    
    $array = [5, 100, 4, 50, -10, 0, 1, 2, 22];
    
    echo arrayMin($array) . PHP_EOL;
    
?>