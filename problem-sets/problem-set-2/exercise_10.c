#include <stdio.h>

    int main(void){
        double a, b, c;

        scanf("%lf%lf%lf", &a, &b, &c);



        if (a>= b && b >= c){
        	printf("%.2lf, %.2lf, %.2lf\n", c, b, a);  }

        else if (a>= c && c >= b){
        	printf("%.2lf, %.2lf, %.2lf\n", b, c, a);  }

        else if (b>= a && a >= c){
        	printf("%.2lf, %.2lf, %.2lf\n", c, a, b);  }

        else if (b>= c && c >= a){
        	printf("%.2lf, %.2lf, %.2lf\n", a, c, b);  }

        else if (c>= a && a >= b){
        	printf("%.2lf, %.2lf, %.2lf\n", b, a, c);  }

        else if (c>= b && b >= a){
        	printf("%.2lf, %.2lf, %.2lf\n", a, b, c);  }




        return 0;
    }
