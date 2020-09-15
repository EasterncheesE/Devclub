<?php
    function arrayCopy(&$source, &$destination) {
        $destination = $source;
    }
    
    
    $source = [1, 2, 3, 4, 5, 6 ,7 ,8 ,9 ,0];
    $destination = array();
    
    
    arrayCopy($source, $destination);
    
    print_r($destination);
?>