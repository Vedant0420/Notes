<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
class Student 
{
        var $name;
        var $marks;

        function __construct($name, $marks) {
            $this->name = $name;
            $this->marks = array_map('floatval', $marks);
        }
        function total() {
            return round($this->marks[0] + $this->marks[1] + $this->marks[2], 2);
        }
        function percentage() {
            return round($this->total() / 3, 2);
        }
    }
    $name = $_POST['name'];
    $marks = [$_POST['sub1'], $_POST['sub2'], $_POST['sub3']];
    $student = new Student($name, $marks);
    echo "<h2>Result for {$student->name}</h2>";
    echo "Marks: " . implode(", ", $student->marks) . "<br>";
    echo "Total: " . $student->total() . "<br>";
    echo "Percentage: " . $student->percentage() . "%<br>";
}
?>
