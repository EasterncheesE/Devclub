<?php
    $a = 25;
    $b = 100;
    $c = 15;
    $d = 5000;
    $e = 20000;
    $max = $a;
    
    if ( $max < $b ) {
        $max = $b;
    }
    if ( $max < $c ) {
        $max = $c;
    }
    if ( $max < $d ) {
        $max = $d;
    }
    if ( $max < $e ) {
        $max = $e;
    }
    
    
    echo "Max number = " . $max . PHP_EOL;
    
?>
    
    