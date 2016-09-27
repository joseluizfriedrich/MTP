#include <stdio.h>
void vetor_igual (int *A, int n, int *B);
int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {0};
    vetor_igual (A, n, B);
    return 0;
}


void vetor_igual (int *A, int n, int *B)
{
 int i;
 for( i = 0; i < n ; i++)
 {
     B[0] = B[0] + A[i];
 }
 printf("%d\n", B[0]);
}



