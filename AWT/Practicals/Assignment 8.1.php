<?php
$numbers = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];
echo "Original Array:<br>";
foreach ($numbers as $num) 
    {
    echo $num . " ";
    }
echo "<br><br>Array in Reverse Order:<br>";
for ($i = count($numbers) - 1; $i >= 0; $i--) 
    {
    echo $numbers[$i] . " ";
    }
?>