<!-- Write a PHP program to check string is palindrome or not.  -->

<?php

$str = "Madam";

$str_lower = strtolower($str);
$str_clean = preg_replace('/[^a-z0-9]/', '', $str_lower);

$rev_str = strrev($str_clean);


if($str_clean == $rev_str) {
    echo "$str is a palindrome";
} else {
    echo "$str is not a palindrome";
}
?>

 