hanoi <- function(n, a, b) {
  if(n!=1) {
    temp=6-a-b
    hanoi(n-1,a,temp)
    hanoi(n-1,temp,b)
  }
}

hanoi(20, 1, 2)
