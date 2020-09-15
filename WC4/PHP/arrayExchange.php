<?php
    function arrayExchange(&$array) {
        for ( $i = 0, $limit = count($array) - 1; $i < $limit; $i += 2 ) {
            $temp = $array[$i];
            
            $array[$i] = $array[$i+1];
            $array[$i+1] = $temp;
        }
    }
    
    
    $array = range(1, 31);
    
    arrayExchange($array);
    
    print_r($array);
    
?>