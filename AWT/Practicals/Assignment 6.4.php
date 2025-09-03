<!-- Write a PHP code to replace one string to another using regular expression -->

<?php
$original = "I love MIT-World Peace University!";
$replaced = preg_replace('/MIT-World Peace University/', 'MIT-WPU', $original);
echo $replaced;
?>