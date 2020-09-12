<?php
    $a;
    $b;
    
    echo "Print the numbers" . PHP_EOL;
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    
    if ( $a >= $b ) {
        echo "a is max" . PHP_EOL;
    } else {
        echo "b is max" . PHP_EOL;
    }