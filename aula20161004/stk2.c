#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
char * recebeTexto();
char * leTexto();

int main() {
    char * texto;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = recebeTexto();
    printf("\n::: Ate a proxima :::::::::::\n");
    free(texto);
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * recebeTexto() {
    char * texto = leTexto();
    char * aux;
    int c, tamanho = 0;
    printf("%s", texto);
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    return texto;
}


char * leTexto() {
    FILE * arquivo;
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    arquivo = fopen("meutexto.txt","r");
    if(arquivo == NULL)
        return texto;
    else {
        do {
            c = fgetc(arquivo);
            if(c != EOF) {
                aux = (char *) realloc(texto, tamanho+2);
                if(aux != NULL) {
                    texto = aux;
                    texto[tamanho] = c;
                    tamanho++;
                    texto[tamanho] = '\0';
                }
                else printf("\n** Erro! Sem memoria! **\n");
            }
        } while(c != EOF);
        fclose(arquivo);
        return texto;
    }
}

