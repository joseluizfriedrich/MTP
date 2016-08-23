#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int numero, numero_usuario, soma;
    numero = rand()%0 + 1 ;
    printf("\n Favor insira um numero qualquer positivo: ");
    scanf("%d",&numero_usuario);
    soma = numero_usuario+numero;
    printf("O numero e: %d", soma);
    if(soma%2 == 0)
        printf("\n O numero e par!\n");
    else
        printf("\n O numero e impar!\n");
    return 0;
}
