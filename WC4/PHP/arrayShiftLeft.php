<?php
    function arrayShiftLeft(&$array) {
        array_push($array, array_shift($array));
    }
    
    
    
    $array = range (0,10);
    
    arrayShiftLeft($array);
    
    print_r($array);
    
?>