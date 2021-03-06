#include <stdio.h>
#define NCHAR 256
int main()
{
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float aultura_m;
    int opcao;
    do
    {
        printf("1 - Receber Dados\n");
        printf("2 - Recuperar Dados\n");
        printf("0 - Sair\n");
        printf("Entre com opcao\n");
        fscanf(stdin, "%d", &opcao);
        getchar();
        if(opcao == 1) receberDados();
        if(opcao == 2) recuperarDados();
    }
    while (!opcao);
    return 0;
}

void receberDados()
{
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura_m;
    printf("entre com seu nome: ");
    fgets(nome, NCHAR, stdin);
    printf("entre com sua idade: ");
    fscanf(stdin, "%d", &idade);
    printf("entre com sua altura: ");
    fscanf(stdin, "%f", &altura_m);
    arquivo = fopen("info.txt", "w");
    if(arquivo == NULL)
        fprintf(stderr, "Erro na criancao do arquivo!\n");
    else
    {
    fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura_m);
    fclose(arquivo);
    }
}

void recuperarDados()
{
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura_m;
    arquivo = fopen("info.txt", "r");
    if(arquivo == NULL)
        fprintf(stderr, "Arquivo nao existe");
    else
    {
    fgets(nome, NCHAR, arquivo);
    fscanf(arquivo, "%s\n%d\n%f\n", nome, &idade, &altura_m);
    fclose(arquivo);
    fprintf(stdout, "Name: %s\n", nome);
    fprintf(stdout, "Idade: %d\n", idade);
    fprintf(stdout, "Altura: %f\n", altura_m);
    }
}
