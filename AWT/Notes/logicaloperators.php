<?php

// Logical operators = combine conditional statements
// if (condition1 && condition2)

// && = True if both conditions are true
//  $temp = -10;

//    if($temp >= 0 && $temp <= 30 ){
//     echo"The weather is good.";
//    }
//    else{
//     echo"The weather is bad.";
//    }

// || = True if at least one condition is true
//    $temp = -10;

//    if($temp < 0 || $temp > 30 ){
//     echo"The weather is bad.";
//    }
//    else{
//     echo"The weather is good.";
//    }

// !  = True if false. False if true.



//    $temp = -10;
//    $cloudy = false;

//    if($temp >= 0 || $temp <= 30 ){
//     echo"The weather is good.";
//    }
//    else{
//     echo"The weather is bad.";
//    }


//    if(!$cloudy){
//     echo"It's sunny.";
//    }
//    else{
//     Echo"It's cloudy.";
//    }

//    $age = 12;
//    $citizen = true;

//    if($age >=18 && $citizen){
//     echo"You can vote!";
//    }
//    else{
//     echo"You can't vote!";
//    }

$child = false;
$senior = false;
$ticket = null;

if($child || $senior){
    $ticket = 10;
}
else{
    $ticket = 15;
}

echo"The ticket price is \$$ticket";
?>
