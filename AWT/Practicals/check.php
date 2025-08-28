<?php
if (isset($_GET['text'])) {
    $text = $_GET['text'];

    if (ctype_upper($text)) {
        echo "<h3>The string '$text' is in uppercase.</h3>";
    } 
    else if (ctype_lower($text)) {
        echo "<h3>The string '$text' is in lowercase.</h3>";
    } 
    else {
        echo "<h3>The string '$text' is a mix of both.</h3>";
    }
    
} else {
    echo "<h3>Please enter a string.</h3>";
}
?>