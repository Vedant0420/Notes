<?php
$arr1 = [10, 20, 30, 40, 50];
$arr2 = [5, 15, 25, 35, 45];
$sum = [];
for ($i = 0; $i < count($arr1); $i++) 
{
    $sum[$i] = $arr1[$i] + $arr2[$i];
}
echo "Sum of Two Arrays:<br>";
foreach ($sum as $value) {
    echo $value . " ";
}
?>
