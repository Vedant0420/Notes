<?php


if ($_GET['p'] && $_GET['r'] && $_GET['t']) {

    
    $principal = $_GET['p'];
    $rate = $_GET['r'];
    $time = $_GET['t'];
    
    $simple_interest = ($principal * $rate * $time) / 100;
    
    echo "Principal:" . $principal . "<br>";
    echo "Rate:" . $rate . "<br>";
    echo "Time:" . $time . " years<br>";
    echo "Simple Interest = ".$simple_interest;
}
    ?>