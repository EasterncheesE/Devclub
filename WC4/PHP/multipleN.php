<?php 
    $input = fgets(STDIN);
    $divisor = fgets(STDIN);
    
    if ( $divisor < 0 ) {
        $divisor = -$divisor;
    }
    $input -= $input % $divisor;
    $i = 0;
    
    for ( ; $i < $input; $i += $divisor ) {
        echo $i . ' ';
    }
    echo $input . PHP_EOL;
    
?>