<?php
    function arrayShiftRight(&$array) {
        array_unshift($array, array_pop($array));
    }
    
    $array = range(0, 10);
    
    arrayShiftRight($array);
    print_r($array);
?>