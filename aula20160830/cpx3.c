#include <stdio.h>
#include <complex.h>
#include <math.h>

int main()
{
    double complex z1, z2, raiz;
    double R_z1, I_z1;
    printf("real de z1: ");
    scanf("%lf",&R_z1);
    printf("imaginario de z1: ");
    scanf("%lf",&I_z1);
    printf("raiz: %lf + %lf*i\n", creal(raiz),cimag(raiz));
    printf("raiz: %lf / %lf\n", cabs(raiz),carg(raiz));
    return 0;
}

