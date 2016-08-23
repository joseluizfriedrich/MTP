#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int dado1, dado2, dado3, soma;
    dado1 = rand()%6 + 1 ;
    dado2 = rand()%6 + 1 ;
    dado3 = rand()%6 + 1 ;
    soma = (dado1+dado2+dado3);
    printf("o valor da soma e: %d",soma);
    if(soma == 7 || soma == 11)
    {
        printf("\n parabens voce ganhou!\n");
    }
    else
        printf("\n Infemente voce perdeu!\n");
    return 0;

}
