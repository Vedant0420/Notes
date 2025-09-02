<?php
$record = array(6, 3, 9, 5, 1);
echo "Original Array: ";
print_r($record);
sort($record);
echo "\nArray in Ascending Order: ";
print_r($record);
rsort($record);
echo "\nArray in Descending Order: ";
print_r($record);
?>
