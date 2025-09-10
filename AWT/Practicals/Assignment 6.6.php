<!-- Write a PHP code to accept employee name and joining date of employee in dd-mm-yyyy format and display his/her joining month -->

<?php
$name = "Vedant";
$join_date = "14-09-2023";
$date = DateTime::createFromFormat('d-m-Y', $join_date);
$month = $date->format('F');
echo "$name joined in $month";
?>