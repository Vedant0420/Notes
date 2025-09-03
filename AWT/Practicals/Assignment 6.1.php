<?php

function sum($n)
{
    if($n<=0)
        return 0;
    else
        return $n + sum($n-1);

}
echo "The Summation of Number is ". sum(5);
?>