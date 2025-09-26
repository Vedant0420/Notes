<?php

//switch = replacement to many else if statement
// More efficient, Less code to write
$grade ="G";

switch($grade){
    case "A":
        echo"You did great";
        break;
    case "B":
        echo"You did great";
        break;
    case "C":
        echo"You did okay";
        break;    
    case "D":
        echo"You did poorly";
        break;
    case "F":
        echo"You Failed";
        break;
    default:
    echo "$grade is not a valid grade";


}

?>