#include <stdio.h>
int main()
{
    unsigned int numero1 = 0, numero2 = 0, soma = 0;
    printf("Pf digite dois numeros reais: \n");
    printf("Primeiro numero: ");
    scanf("%f", &numero1);
    printf("Segundo numero: ");
    scanf("%f", &numero2);
    soma = numero1+numero2;
    unsigned char * ponteiro = NULL; // para apontar para lugar nenhum
    printf("Local do Numero 1: ");
    printf("%p: %u\n", &numero1, numero1, numero1);
    printf("Local do Numero 2: ");
    printf("%p: %u\n", &numero2, numero2);
    printf("Local da Soma: ");
    printf("%p: %u\n", &soma, soma);
    return 0;
}

