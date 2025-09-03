<!-- Write a PHP code to accept sentence from user as “MIT-World Peace University” and split the sentence in four parts. -->

<?php
$sentence = "MIT-World Peace University";
$parts = preg_split('/[\s-]/', $sentence);

foreach ($parts as $index => $part) {
    echo "Part " . ($index + 1) . ": $part\n";
}
?>