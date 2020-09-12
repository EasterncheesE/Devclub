<?php 
    $input = fgets(STDIN);
    $input -= $input % 5;
    $i = 0;
    
    for ( ; $i < $input; $i += 5 ) {
        echo $i . ' ';
    }
    echo $input . PHP_EOL;
    
?>