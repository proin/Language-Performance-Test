import sys
import datetime

def hanoi(n, a, b):
  if n!=1:
    temp=6-a-b;
    hanoi(n-1, a, temp);
    hanoi(n-1, temp, b);

n = int(sys.argv[1])

st = datetime.datetime.now()
hanoi(n, 1, 2)
t = datetime.datetime.now() - st

print t.seconds*1000 + t.microseconds/1000, "ms"
