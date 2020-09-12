<?php 
    $dividend = fgets(STDIN);
    $divisor = fgets(STDIN);
    $multiple; 
    
    if ( $divisor < 0 ) {
        $divisor = -$divisor;
    }
    
    $multiple = $dividend - $dividend % $divisor;
    
    if ( $multiple > $dividend ) {
        echo ($multiple - $divisor) . PHP_EOL;
    } else {
        echo $multiple . PHP_EOL;
    }
    
    ?>