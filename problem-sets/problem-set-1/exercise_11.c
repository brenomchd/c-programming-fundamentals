#include <stdio.h>


int main(void){

double a, b, c, d, e, f, x, y;

scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);



x = ((c * e) - ( b * f)) / ((a * e) - (b * d));
y = ((a * f) - (c * d)) / ((a * e) - (b * d));

printf("O VALOR DE X E = %.2lf\n", x);
printf("O VALOR DE Y E = %.2lf\n", y);

    return 0;
}
