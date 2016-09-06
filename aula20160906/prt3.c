#include <stdio.h>
int main()
{
    int contagem = 0, tamanoDoVetor = 0;
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    tamanoDoVetor = sizeof(vetor)/sizeof(int);
    unsigned char * ponteiro = NULL; // para apontar para lugar nenhum
    ponteiro = (unsigned char *) vetor; // veotor = &(vetor[0])
    for(; ponteiro < vetor + tamanoDoVetor ;ponteiro++)
    {
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro == 0xFF)
        {
            contagem++;
        }
    }
    printf("Sao %d os bytes de memoria com apenas 1's. \n", contagem);
    return 0;
}

