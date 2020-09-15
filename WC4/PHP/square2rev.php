<?php
    $size = fgets(STDIN);
    
    $counter = $size * $size - $size;
    
    for ( $row = 0; $row < $size; $row++ ) {
        for ( $column = 1; $column < $size; $column++ ) {
            $counter += 1;
            echo $counter . ' ';
        }
        $counter += 1;
        echo $counter . PHP_EOL;
        $counter = $counter - $size * 2;
    }
    
?>