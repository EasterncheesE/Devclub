<?php
    $size = fgets(STDIN);
    
    for ( $row = 0, $counter = 1; $row < $size; $row++, $counter++ ) {
        for ( $column = 1; $column < $size; $column++, $counter++ ) {
            echo $counter . ' ';
        }
        echo $counter . PHP_EOL;
    }
    
?>