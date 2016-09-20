#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int imprimir();
int numero_sorteado();

int main()
{
    int numero, numeroA;
    printf("\n Pf escolha um numero entre 1 e 10: ");
    scanf("%d", &numero);
    numeroA = numero_sorteado();
    if (numero == numero_sorteado)
    {
        printf("\n Parabens, o numero escolhido foi sorteado: ");
    }
    else{
        printf("\n Vc perdeu, o numero escolhido nao foi sorteado");
    }

    return 0;
}

int numero_sorteado()
{
    int numero_sorteado = rand()%10+1;
    return numero_sorteado;
}

//int imprimir()
//{
  //  int numero;
    //if (numero == numero_sorteado)
    //{
       // printf("\n Parabens, o numero escolhido foi sorteado: ");
    //}
    //else{
      //  printf("\n Vc perdeu, o numero escolhido nao foi sorteado");
    //}

//}
