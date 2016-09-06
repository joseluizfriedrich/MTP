#include <stdio.h>
#include <time.h>
int main()
{
    int vetor[10], j;
    printf("Entre com um numero inteiro nao negativo: ");
    for ( j = 0; j < 10; j++)
    {
        scanf("%d", &vetor[j+1]);
    }
    printf("%d", vetor[10]);
    return 0;
}
