import datetime

def hanoi(n, a, b):
  if n!=1:
    temp=6-a-b;
    hanoi(n-1, a, temp);
    hanoi(n-1, temp, b);

st = datetime.datetime.now()
hanoi(20, 1, 2)
t = datetime.datetime.now() - st
print t.microseconds/1000, "ms"
