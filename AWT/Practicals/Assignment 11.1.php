<?php

    //Q1.	Write a PHP class called Calculator that has a private property called result. Implement methods to perform basic arithmetic operations like addition, subtraction, multiplication and division.
class Calculator {
    private $result;

    function add($a, $b) {
        $this->result = $a + $b;
        echo "Addition = $this->result<br>";
    }

    function subtract($a, $b) {
        $this->result = $a - $b;
        echo "Subtraction = $this->result<br>";
    }

    function multiply($a, $b) {
        $this->result = $a * $b;
        echo "Multiplication = $this->result<br>";
    }

    function divide($a, $b) {
        if($b != 0)
            $this->result = $a / $b;
        else
            $this->result = "Cannot divide by zero!";
        echo "Division = $this->result<br>";
    }
}

$obj = new Calculator();
$obj->add(10, 5);
$obj->subtract(10, 5);
$obj->multiply(10, 5);
$obj->divide(10, 5);
?>