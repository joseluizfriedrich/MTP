#include <stdio.h>
int pares();
int impares();
int main()
{
    int tipo;
    printf("\n Ola, Quais os numeros vc gostaria de visualizar: ");
    printf("\n Digite o numero referente a opcao: 1 ou 2 ");
    printf("\n 1 - PAR \n ");
    printf("\n 2 - IMPAR \n ");
    scanf("%d", &tipo);
    if(tipo == 1)
        pares();
    if(tipo == 2)
        impares();
    else(tipo != 1 || tipo != 2);
    {
        printf("\n numero invalido \n\n");
    }
    return 0;
}

int pares()
{
    printf("\n Os numeros pares de 1 ate 10 sao: ");
    printf("\n      2, 4, 6, 8, 10 ");
}

int impares()
{
    printf("\n Os numeros impares de 1 ate 10 sao: ");
    printf("\n 1, 3, 5, 7, 9 ");
}
