<?php
    function arrayPrint(&$out, &$array) {
        $result = implode(' ', $array) . PHP_EOL;
        fwrite($out, $result);
    }
    
    $array = range(0, 10, 1);
    $out = fopen("task.out", "w");
    
    arrayPrint($out, $array);
    fclose($out);
    
?>