#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i;
    int indice = 0;
    char frase[256];
    printf("Entre com uma frase: ");
    fgets ( frase, 256, stdin);
    for ( i = 0; frase[i] != '\0' ; i++)
    {
        frase[i] = toupper(frase[i]);
    }
    printf("Tamanho: %u\n", strlen(frase));
    if(strcmp(frase,"BOM DIA") == 0)
    {
        printf("Bom dia para voce tambem!\n");
    }
    else
    {
        printf("Voce quer dizer: %s?\n", frase);
    }
    return 0;
}
