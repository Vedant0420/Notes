<?php
$str = "Welcome to MIT-WPU Dept of CS & Apps";
preg_replace("Welcome","Wlcom", $str, $m);
echo "Count = ".count($m[0]);
?>