#include <stdio.h>
#include <math.h>
int main()
{
    float resultado, x1, y1, x2, y2, auxiliar, auxiliar2;
    printf("Para calcular a distancia entre dois pontos digite as cordenadas : ");
    printf("\nX1: ");
    scanf("%f",&x1);
    printf("Y1: ");
    scanf("%f",&y1);
    printf("X2: ");
    scanf("%f",&x2);
    printf("Y2: ");
    scanf("%f",&y2);
    auxiliar = (x2-x1);
    auxiliar2 = (y2-y1);
    auxiliar = pow(auxiliar, 2);
    auxiliar2 = pow(auxiliar2, 2);
    resultado = sqrt(auxiliar+auxiliar2);
    printf("a distancia entre os pontos: %f", resultado);
    return 0;


}
