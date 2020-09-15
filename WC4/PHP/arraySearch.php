<?php
    function arraySearch($needle, &$array) {
        $temp = array_search($needle, $array, true);
        
        if ( $temp != false ) {
            return $temp;;
        } else {
            return -1;
        }
    }
    
    $array = [1, 2, 3, 4, 5, 6, 7 ,8 ,9, 0];
    
    echo arraySearch(0, $array) . PHP_EOL;
    
?>