<?php
    $size = fgets(STDIN);
    
    for ( $row = 0; $row < $size; $row++ ) {
        for ( $column = 1; $column < $size; $column++ ) {
            echo $column . ' ';
        }
        echo $size . PHP_EOL;
    }
    
?>