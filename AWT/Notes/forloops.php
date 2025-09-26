<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action ="forloops.php" method="POST">
    Enter a Number to count down from:
    <input type = "text" name ="counters"> <br>
    <input type = "submit" value ="Start"> <Br>

</body>
</html>


<?php
$counter = null;
$counter = $_POST["counters"];

for($i = $counter;$i>0;$i--){
    echo $i . "<br>";
}
  
?>