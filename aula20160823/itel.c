#include <stdio.h>
int main()
{
    int i;
    int numero, fatorial = 1;
    printf("Fatorial de: ");
    scanf("%d",&numero);
    for(i = 1; i <= numero; i++)
        fatorial = fatorial * i;
    printf("O fatorial de %d r %d\n",numero,fatorial);
    return 0;

}
