#include <stdio.h>
#include <math.h>
int main()
{
    float numero, base, logaritmo;
    printf("calculo do logaritmo: \n");
    printf("Digite o numero e a  base desejada: \n");
    printf("numero: ");
    scanf("%f",&numero);
    printf("base: ");
    scanf("%f",&base);
    logaritmo = (log10(numero))/(log10(base));
    printf("a o logaritmo eh : %f", logaritmo);
    return 0;
}
