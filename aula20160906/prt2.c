#include <stdio.h>
int main()
{
    int contagem = 0, tamanoDoVetor = 0;
    int vetor[] = {0, 1, 2, 4, 8};
    tamanoDoVetor = sizeof(vetor)/sizeof(int);
    unsigned char * ponteiro = NULL; // para apontar para lugar nenhum
    ponteiro = (unsigned char *) vetor; // veotor = &(vetor[0])
    for(; ponteiro < vetor + tamanoDoVetor ;ponteiro++)
    {
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro == 0x0) contagem++;
    }
    printf("São %d os bytes de memoria com apenas 0's. \n", contagem);
    return 0;
}
