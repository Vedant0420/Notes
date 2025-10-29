<?php
class Person {
    public $name;
    public $age;

    public function __construct($name, $age) {
        $this->name = $name;
        $this->age = $age;
    }
}

class Employee extends Person {
    public $salary;
    public $position;

    public function __construct($name, $age, $salary, $position) {
        parent::__construct($name, $age);
        $this->salary = $salary;
        $this->position = $position;
    }

    public function displayDetails() {
        echo "Name: $this->name, Age: $this->age, Position: $this->position, Salary: $this->salary<br>";
    }
}

$emp = new Employee("Vedant", 22, 30000, "Developer");
$emp->displayDetails();
?>
