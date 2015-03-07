#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>

void hanoi(int n, int a, int b) {
  int temp;
  if (n != 1) {
    temp = 6 - a - b;
    hanoi(n - 1, a, temp);
    hanoi(n - 1, temp, b);
  }
}

long long current_timestamp() {
    struct timeval te;
    gettimeofday(&te, NULL);
    long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000;
    return milliseconds;
}

int main(int argc, char **argv) {
  int n = atoi(argv[1]);

  long st = current_timestamp();
  hanoi(n,1,2);
  long t = current_timestamp() - st;

  printf("%ld ms\n",t);
  return 0;
}
