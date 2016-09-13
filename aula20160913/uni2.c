#include <stdio.h>

union Uniao
{
    int i;
    float f;
};

int main()
{
    union Uniao numero;
    char opcao;
    do
    {
        printf("Vc quer entrar com (i)int ou (f) float?");
        scanf("%c", &opcao);
        fflush(stdin);

    }
    while ( opcao != 'i' && opcao != 'I' && opcao != 'f' && opcao != 'F');
    if(opcao == 'i' || opcao == 'I')
    {
        printf("entre com o int: ");
        scanf("%d", &numero);
        printf("como float; %e\n", &numero.f);
    }
    else
    {
        printf("entre com o float: ");
        scanf("%f", &numero.f);
        printf("como int: %d\n", &numero.i);
    }
    return 0;
}
