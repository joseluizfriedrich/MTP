#include <stdio.h>
#include <complex.h>

int main()
{
    double complex z1, z2, soma;
    double R_z1, I_z1, Ic_z1;
    printf("real de z1: ");
    scanf("%lf",&R_z1);
    printf("imaginario de z1: ");
    scanf("%lf",&I_z1);
    Ic_z1 = -I_z1;
    soma = (R_z1*R_z1)+(R_z1*Ic_z1)+(I_z1*R_z1)+(I_z1*Ic_z1);
    printf("soma: %lf + %lf*i\n", creal(soma),cimag(soma));
    printf("soma: %lf / %lf\n", cabs(soma),carg(soma));
    return 0;
}
