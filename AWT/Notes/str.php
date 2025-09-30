<?php
$str = "Welcome to MIT-WPU Dept of CS & Apps";
preg_replace("Welcome","Wlcm", $str, $m);
echo "Count = ".count($m[0]);
?>