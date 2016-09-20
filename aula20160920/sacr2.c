#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dado();

int main()
{
    srand(time(0));
    int dado1, dado2, dado3, dado4, dado5;
    int i, soma_dado;
    printf("\n O jogo vai comecar: ");
    printf("\ns Os valores dos dados sao: ");
    dado1 = dado();
    printf("\n O %d", dado1);
    dado2 = dado();
    printf("\n O %d", dado2);
    dado3 = dado();
    printf("\n O %d", dado3);
    dado4 = dado();
    printf("\n O %d", dado4);
    dado5 = dado();
    printf("\n O %d", dado5);
    while( i <= 3)
    {
        soma_dado = dado1 + dado2 + dado3 + dado4 + dado5;
        if ( soma_dado >= 27)
        {
            printf("\n Voce ganhou, a soma e igual a: %d", soma_dado);
        }
        else
            soma_dado = 0;
        i++;
    }
    if(i = 3)
        printf("\n Tentativas esgotadas, voce perdeu\n \n");

    return 0;
}

int dado()
{
    int dado = rand()%6+1;
    return dado;
}
