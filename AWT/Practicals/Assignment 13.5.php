<?php
abstract class Shape {
    abstract public function calculateArea();
}

class Triangle extends Shape {
    public $base;
    public $height;

    public function __construct($base, $height) {
        $this->base = $base;
        $this->height = $height;
    }

    public function calculateArea() {
        return 0.5 * $this->base * $this->height;
    }
}

class Rectangle extends Shape {
    public $length;
    public $width;

    public function __construct($length, $width) {
        $this->length = $length;
        $this->width = $width;
    }

    public function calculateArea() {
        return $this->length * $this->width;
    }
}

$triangle = new Triangle(10, 5);
$rectangle = new Rectangle(8, 4);

echo "Triangle Area: " . $triangle->calculateArea() . "<br>";
echo "Rectangle Area: " . $rectangle->calculateArea();
?>
