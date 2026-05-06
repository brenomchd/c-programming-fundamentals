#include <stdio.h>

int main(void){

    double tc, tf, p, mm;

    scanf("%lf%lf",&tf,&p);

    tc = 5*(tf - 32)/9;
    mm = 25.4 * p;

    printf("O VALOR EM CELSIUS = %.2lf\n", tc);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", mm );




    return 0;
}