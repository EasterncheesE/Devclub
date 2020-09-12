<?php 
    $input = fgets(STDIN);
    $limit = $input - 1;
    $i = 1;
    
    for ( ; $i < $limit; $i += 2 ) {
        echo $i . ' ';
    }
    echo $i . PHP_EOL;
    
?>