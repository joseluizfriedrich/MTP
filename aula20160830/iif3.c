#include <stdio.h>
#include <math.h>

int main()
{
    int numero, invertido, i;
    float numeroPasso2 = 0;
    double numeroPasso3;
    printf(" Digite um numero qualquer: ");
    scanf("%d",&numero);
    invertido = 1numero;
    numeroPasso2 = 1numero;
    for(i = 0; i <= 729; i++)
        {
            numeroPasso2 = numeroPasso2 + invertido;

        }
    numeroPasso2 = numeroPasso2 - invertido;
    printf("%f", numeroPasso2);
    return 0;
}
