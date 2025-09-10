<?php
$students = ["Vedant" => 85,"Aman" => 78,"Riya" => 92,"Karan" => 68,"Meera" => 74];
echo "<h3>Student Percentage Records</h3>";
foreach ($students as $name => $percentage) 
{
    echo "Name: $name - Percentage: $percentage% <br>";
}
?>
