#include <stdio.h>
#include <math.h>
#define N 3
#define PI 4.0*atan(1.0)
int main() {
  int i;
  for(i = 2; i <= N*2; i += 2)
    printf("pi/%d : %f\n", i, PI/i);
  return 0;
}
