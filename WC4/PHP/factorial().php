<?php
    function factorial($n) {
        if ( $n >= 2 ) {
            return factorial($n - 1) * $n;
        } else if ( $n < 0 ) {
            return -1;
        }
        return 1;
    }
    
    
    $a = 5;
    
    echo factorial($a) . PHP_EOL;
    
?>