#include <stdio.h>
int main()
{
    int numero;
    printf("Favor insira um numero: ");
    scanf("%d",&numero);
    if(numero%2 == 0)
        printf("O numero e par!\n");
    else("O numero e impar!\n");
    if(numero%3 == 0)
        printf("E multiplo de 3!\n");
    if(numero%5 == 0)
        printf("E multiplo de 5!\n");
    if(numero%7 == 0)
        printf("E multiplo de 7!\n");
    return 0;
}
