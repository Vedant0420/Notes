<?php

// echo statement to print data
echo "Hello world<br>"; // echo statement
// Can also be done like this: echo("Hello World");

// variables - starts with $, [Local and Global Variables]
$num1 = 20;
$text = "hello this printed by using call by value in echo";
echo "$num1<br>$text"; // will call 20 and print 20

// --------------------------------------
// Data types
// --------------------------------------
$num        = 10;       // Integer
$percentage = 86.55;    // Float
$name       = "MIT";    // String
$a          = 'P';      // Character
$flag       = true;     // Boolean
/*  
Array
Object
NULL
*/

// --------------------------------------
// Constant
// --------------------------------------
define("PI", 3.142);
echo "<br>";
echo PI . "<br>";

//Arithmetic Operators 
// + - * / ** %

$x=10;
$y=3;
$z=null;

//$z = $x + $y; Addition
//$z = $x - $y; Subtraction
//$z = $x / $y; Division
//$z = $x * $y; Multiplications
//$z = $x ** $y; Power

$z= $x ** $y; //10x10X10 = 1000 
echo  $z ;

// Increment / Decrement Operators

$counter = 0;

$counter++; // or $counter-- or $counter+=/-=
echo "<br>" .  $counter . "<br>";

// $_GET, $_POST = special variables used to collect data from an HTML form
//                 data is sent to the file in the action attribute of <form>
//                 <form action="yourphpfilename.php" method="get">

//$_GET = Data is appended to the url
//        NOT SECURE
//        char limit
//        Bookmark is possible w/ values
//        GET requests can be cached
//        Better for a search page

//$_POST = Data is packaged inside the body of the HTTP request
//         MORE SECURE
//         No data limit
//         Cannot bookmark
//         GET requests are not cached
//         Better for submitting credentials

echo $_POST["username"] . "<br>";
echo $_POST["password"] . "<br>";


?>
