#include <stdio.h>
int main()
{
    int i;
    int base, potencia;
    printf("Favor insira um numero inteiro diferente de 0, Base; ");
    scanf("%d",&base);
    printf("\n Favor insira um numero inteiro diferente de 0, potencia; ");
    scanf("%d",&potencia);
    for(i = 1; i <= potencia; i++)
        base = base * i;
    printf(" O valor do numero elevado a potencia e: %d",base);
}
