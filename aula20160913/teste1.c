#include <stdio.h>
#include <math.h>
#define TROCA(a,b) \
  ({ a ^= b;	   \
    b ^= a;	   \
    a ^= b; })
#define QUADRADO(x) (x*x)
int main() {
  int i = 128, j;
  j = QUADRADO(i);
  TROCA(i,j);
  printf("%d elevado a 2 = %d\n", j, i);
  return 0;
}
