#include <stdio.h>

int main(void){

double x, y;

scanf("%lf", &x);

if(x < 1){

y = x;

printf("Y = %.0lf\n", y);	}


if(x == 1){

y = 0;

printf("Y = %.0lf\n", y);	}


if (x > 1){

y = x * x;

printf("Y = %.0lf\n", y);	}






    return 0;
}
