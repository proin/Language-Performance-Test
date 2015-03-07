hanoi <- function(n, a, b) {
  if(n!=1) {
    temp=6-a-b
    hanoi(n-1,a,temp)
    hanoi(n-1,temp,b)
  }
}

args=(commandArgs(TRUE))
n = as.numeric(args[1])

hanoi(n, 1, 2)