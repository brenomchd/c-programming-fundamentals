#include <stdio.h>

int main(void){

double prf, pdist, pimp, dist, imp, ccon;

scanf("%lf%lf%lf", &prf, &pdist, &pimp);

dist = (pdist/100) * prf;
imp = (pimp/100) * prf;
ccon = prf + dist + imp;



printf("O VALOR DO CARRO E = %.2lf\n", ccon);





    return 0;
}