#include <stdio.h>

struct soma
{
    int numerador;
    int denominador;
};
struct soma_divisores soma(int num1, int den1, int num2, int den2);
int main ()
{
    struct soma_divisores resposta;
    int num1, den1, num2, den2;
    printf("Entre com o numerador: ");
    scanf("%d/%d",&num1,&den1);
    printf("Entre com o denominador: ");
    scanf("%d/%d",&num2,&den2);
    resposta = soma(num1,den1,num2,den2);
    printf("Quociente: %d, Resto: %d/n", resposta.quociente, resposta.resto);
    return 0;
}

struct soma_divisores soma(int num1, int den1, int num2, int den2)
{
    struct soma_divisores resposta;
    resposta.denominador = den1 * den2;
    resposta.numerador = ((den1/(den1 * den2))*num1)+((den2/(den1 * den2))*num2);
    return resposta;
};
