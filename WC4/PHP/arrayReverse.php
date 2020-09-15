<?php
    function arrayReverse(&$array) {
        for ( $counter = 0, $countdown = count($array) - 1; $counter < $countdown; $counter++, $countdown-- ) {
            $temp = $array[$counter];
            
            $array[$counter] = $array[$countdown];
            $array[$countdown] = $temp;
        }
    }
    
    $array = range(-5, 5);
    
    arrayReverse($array);
    
    print_r($array);
    
?>