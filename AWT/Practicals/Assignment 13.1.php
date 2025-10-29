<?php
class Math {
    public static function add($a, $b) {
        return $a + $b;
    }

    public static function subtract($a, $b) {
        return $a - $b;
    }

    public static function multiply($a, $b) {
        return $a * $b;
    }
}

echo "Add: " . Math::add(10, 5) . "<br>";
echo "Subtract: " . Math::subtract(10, 5) . "<br>";
echo "Multiply: " . Math::multiply(10, 5);
?>