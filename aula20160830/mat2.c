#include <stdio.h>
#include <math.h>
int main()
{
    float ladoA, ladoB, angulo, ladoC;
    printf("insira os lados A e B do triangulo e o angulo entre eles em radianos: ");
    printf("\nlado A: ");
    scanf("%f",&ladoA);
    printf("lado B: ");
    scanf("%f",&ladoB);
    printf("Angulo: ");
    scanf("%f",&angulo);
    ladoC = sqrt(pow(ladoA, 2.0)+pow(ladoB, 2.0)-(2*ladoA*ladoB*cos(angulo)));
    printf("a distancia do lado C eh : %f", ladoC);
    return 0;
}
