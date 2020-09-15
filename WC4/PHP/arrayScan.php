<?php
    function arrayScan(&$array, &$size) {
        $in = fopen("task.in", "r");
        $array1 = explode(" ", fgets($in));
        
        return sizeof($array1);
    }
    
    
    
    $array = array();
    $size = 10;
    
    echo arrayScan($array, $size) . PHP_EOL;
    
?>