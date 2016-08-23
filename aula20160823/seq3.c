#include <stdio.h>
int main ()
{
    float nota_a, nota_b, nota_c, media_aluno;
    printf("Favor insira a nota A do aluno: ");
    scanf("%f",&nota_a);
    printf("\n Favor insira a nota B do aluno: ");
    scanf("%f",&nota_b);
    printf("\n Favor insira a nota C do aluno: ");
    scanf("%f",&nota_c);
    media_aluno = (2*nota_a+3*nota_b+5*nota_c)/(2+3+5);
    printf("\n A media de notas do aluno e; %f", media_aluno);
    return 0;
}
