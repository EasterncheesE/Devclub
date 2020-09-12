<?php 
    $input = fgets(STDIN);
    $input -= $input % 3;
    $i = 0;
    
    for ( ; $i < $input; $i += 3 ) {
        echo $i . ' ';
    }
    echo $input . PHP_EOL;
    
?>