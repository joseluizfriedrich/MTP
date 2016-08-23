#include <stdio.h>
#include <string.h>
int main()
{
    char texto[100], i;
    int cont = 0;
    printf("Favor digite uma frase\n");
    gets(texto);
    for( i=texto[0] ; 1!='\0' ; cont++)
        i = texto[cont];
    printf("O numero de caracteres digitados e: %d", cont-1);
    return 0;
}
