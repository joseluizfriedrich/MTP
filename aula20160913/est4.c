#include <stdio.h>
#include <math.h>

#define RECEBE(r, g, b) \
    ({ printf("Entre com o valor de R "); \
       scanf("%f", &r ); \
       printf("Entre com o valor de G "); \
       scanf("%f", &g ); \
       printf("Entre com o valor de B "); \
       scanf("%f", &g); })

#define CONVERSAO(Y, Pb, Pr) \
    ({ Y = 0.2999*r + 0,587*g 0,144b; \
       Pb = -0,168736*r - 0,331264*g - 0,5b;\
       Pr = 0,5*r - 0,418688*g - 0,081312*b; })

#define VISUALIZAR(Y, Pb, Pr)\
    ({ printf( " o valor e %f" , Y);\
        ({ printf( " o valor e %f" , Pb);\
            ({ printf( " o valor e %f" , Pr);\

struct Ponto {
    float r;
    float g;
    float b;
 };

 int main()
 {
    struct R, G, B;
    float distancia;

    RECEBEPONTO('R', R);
    RECEBEPONTO('G', G);
    RECEBEPONTO('B', B);
     return 0;
 }
