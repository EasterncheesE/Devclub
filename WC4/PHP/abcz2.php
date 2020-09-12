<?php
    $temp = true;
    $input = fgets(STDIN);
    
    if ( $input % 2 == 0 ) {
        echo "alpha" . PHP_EOL;
        $temp = false;
    }
    if ( $input % 3 == 0 ) {
        echo "bravo" . PHP_EOL;
        $temp = false;
    }
    if ( $input % 5 == 0 ) {
        echo "charlie" . PHP_EOL;
        $temp = false;
    }
    if ( $temp == true ) {
        echo "zulu" . PHP_EOL;
    }
?>
