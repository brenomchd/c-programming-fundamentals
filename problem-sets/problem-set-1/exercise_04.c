#include <stdio.h>

int main(void){

double h, hs, m, ms, s, st;

scanf("%lf%lf%lf", &h, &m, &s);

hs = 3600 * h;
ms = 60 * m;
st = hs + ms + s;

printf("O TEMPO EM SEGUNDOS E = %.0lf\n", st);





    return 0;
}