<!-- Write a PHP program to check string is palindrome or not.  -->

<?php
function is_palindrome($string) {
    $string = strtolower(preg_replace('/[^a-z0-9]/', '', $string));
    return $string == strrev($string);
}

// Example usage:
$str = "Madam";
if (is_palindrome($str)) {
    echo "$str is a palindrome";
} else {
    echo "$str is not a palindrome";
}
?>