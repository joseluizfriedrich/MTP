#include <stdio.h>
int main()
{
    int i,numero;
    float fatorial = 1;
    printf("Fatorial de: ");
    scanf("%d",&numero);
    for(i = 1; i <= numero; i++)
        fatorial = fatorial * i;
    printf("O fatorial de %d e %f\n",numero,fatorial);
    return 0;

}
