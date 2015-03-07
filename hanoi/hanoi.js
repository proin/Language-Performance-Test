function hanoi(n, a, b) {
  var temp;
  if(n!=1) {
    temp=6-a-b;
    hanoi(n-1, a, temp);
    hanoi(n-1, temp, b);
  }
}

var st = new Date().getTime();
hanoi(20, 1, 2);
var t = new Date().getTime() - st;
console.log(t + " ms");
