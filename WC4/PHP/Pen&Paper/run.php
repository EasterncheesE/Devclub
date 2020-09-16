<?php
    require_once('Pen.php');
    require_once('Paper.php');

    $pen = new Pen(7);
    $paper = new Paper(6);

    echo "Paper symbols: " . $paper->symbols . "/" . $paper->maxSymbols . PHP_EOL;
    echo "Pen ink amount: " . $pen->inkAmount . "/" . $pen->inkCapacity . PHP_EOL;
    
    try { 
        $pen->write($paper, "Hello");
        $paper->show();
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    
    $paper->show();
    
    
    echo "Paper symbols: " . $paper->symbols . "/" . $paper->maxSymbols . PHP_EOL;
    echo "Pen ink amount: " . $pen->inkAmount . "/" . $pen->inkCapacity . PHP_EOL;
    
    $pen->refill();
    
    try { 
        $pen->write($paper, "ABRACADABRA");
        $paper->show();
    } catch (Exception $e) {
        echo $e->getMessage() . PHP_EOL;
    }
    $paper->show();
?>