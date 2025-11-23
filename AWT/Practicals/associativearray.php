<?php

// associative array = An array made of key->value pairs

$capitals = array(
    "USA" => "Washington D.C.",
    "Japan" => "Kyoto",
    "South Korea" => "Seoul",
    "India" => "New Delhi"
);

//$capitals["USA"] = "Las Vegas";
//$capitals["China"] = "Beijing";
//array_pop($capitals);
//array_shift($capitals);
//$keys = array_keys($capitals);
//$values = array_values($capitals);
//$capitals = array_flip($capitals);
//$capitals = array_reverse($capitals);
//echo count($capitals);

foreach($capitals as $key => $value){
    echo $key . "<br>";
}

?>
