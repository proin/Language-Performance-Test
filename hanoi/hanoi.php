<?php
  function hanoi($n, $a, $b) {
    if($n!=1) {
      $temp=6-$a-$b;
      hanoi($n-1, $a, $temp);
      hanoi($n-1, $temp, $b);
    }
  }

  $st = microtime(true);
  hanoi(20, 1, 2);
  $t = round((microtime(true) - $st) * 1000);
  echo $t." ms\n";
?>
