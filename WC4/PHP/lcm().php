<?php

function gcd($a, $b) {
    if ( $b == 0 ) {
        return $a;
    }
    return gcd($b, $a % $b);
}

function lcm($a, $b) {
    if ( $a == 0 || $b == 0) {
        return 0;
    }
    
    return $a * ( $b / gcd($a, $b));
}
    
    
    $a = 14;
    $b = 24;
    
    echo lcm($a, $b) . PHP_EOL;

?>
