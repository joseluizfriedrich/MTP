#include <stdio.h>
#include <math.h>

#define RECEBEPONTO(c, ponto) \
    ({ printf("Entre coord x de %c: ",c); \
       scanf("%f", &ponto.x ); \
       printf("Entre coord y de %c: ",c); \
       scanf("%f", &ponto.y ); \
       printf("Entre coord z de %c: ",c); \
       scanf("%f", &ponto.z); })

#define MOSTRAPONTO(ponto) \
    ({ printf("( %g; %g) \n", ponto.x,ponto.y,ponto.z);})

#define SOMA(soma, ptA, ptB, ptC ) \
    ({ soma.x = ptA.x + ptB.x + ptC.x; \
       soma.y = ptA.y + ptB.y + ptC.y; })

#define DISTANCIA(ptA, ptB, ptC, d) \
        ({ d=sqrt(pow(ptA.x - ptB.x - ptC.x, 2.f) + \
                  pow(ptA.y - ptB.y - ptC.y, 2.f) + \
                  pow(ptA.z - ptB.z - ptC.z, 2.f)); })

 struct Ponto {
    float x;
    float y;
    float z;
 };

int main()
{
    struct Ponto A, B, C, S;
    float distancia;

    RECEBEPONTO('A', A);
    RECEBEPONTO('B', B);
    SOMA(S, A, B, C);
    MOSTRAPONTO(S);
    DISTANCIA(A, B, C, distancia);
    printf(" A distancia entre eles: %g", distancia);
    return 0;
}

