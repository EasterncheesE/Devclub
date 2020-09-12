<?php
    $a = 25;
    $b = 100;
    $c = 15;
    $max = $a;
    
    if ( $max < $b ) {
        $max = $b;
    }
    
    if ( $max < $c ) {
        $max = $c;
    }
    
    echo "Max number = " . $max . PHP_EOL;
    
?>
    
    