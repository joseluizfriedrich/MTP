#include <stdio.h>

int main()
{
    char * nome_arq = (char *) malloc(256*sizeof(char));
    printf("nome do aqurivo que deseja abrir:   ");
    scanf("%s", nome_arq);
    grava_arq(nome_arq);

    return 0;
}

int grava_arq( char * filename)
{
    FILE * arquivo;
    arquivo = fopen(filename, "w");
    fprintf(arquivo, "funcionou mano!\n");
    fclose(arquivo);

}
