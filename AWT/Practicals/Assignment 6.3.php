<!--Write a PHP program to accept sentence from user and count number of vowels, consonants, digits and special symbols from it using regular expression. -->

<?php
$sentence = "MIT-World Peace University 2025!";

$vowels = preg_match_all('/[aeiouAEIOU]/', $sentence, $dummy);
$consonants = preg_match_all('/[bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ]/', $sentence, $dummy);
$digits = preg_match_all('/[0-9]/', $sentence, $dummy);
$specials = preg_match_all('/[^a-zA-Z0-9\s]/', $sentence, $dummy);

echo "Vowels: $vowels\n";
echo "Consonants: $consonants\n";
echo "Digits: $digits\n";
echo "Special Symbols: $specials\n";
?>