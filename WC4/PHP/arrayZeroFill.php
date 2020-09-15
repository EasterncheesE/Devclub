<?php
    function arrayZeroFill(&$array, $size) {
        $array = array_fill(0, $size, 0);
    }
    
    $array = array();
    $size = 25;
    
    arrayZeroFill($array, $size);
    
    print_r($array);
    
?>