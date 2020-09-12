<?php
    $input = fgets(STDIN);
    
    for ( $counter = 1; $counter < $input; $counter++ ) {
        echo $counter . ' ';
    }
    echo $input . PHP_EOL;
    
?>