#include <stdio.h>
#include <ctype.h>
int main()
{
    int indice = 0; //primeiro caracter da string
    char investigador;
    char frase[256];
    printf("Escreva uma frase: ");
    gets(frase);
    investigador = frase[indice];
    while(investigador != '\0')
    {
        frase[indice] = toupper(investigador);
        indice++;
        investigador = frase[indice];
    }
    printf("%d\n", indice);
    return 0;
}

