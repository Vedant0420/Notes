<?php
$numbers = [12, 7, 9, 20, 33, 14, 5, 18];
$even = 0;
$odd = 0;
foreach ($numbers as $num) 
{
    if ($num % 2 == 0)
        $even++;
    else
        $odd++;
}
echo "Total Even Numbers: " . $even . "<br>";
echo "Total Odd Numbers: " . $odd;
?>