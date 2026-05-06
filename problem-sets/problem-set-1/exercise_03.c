#include <stdio.h>
#include<math.h>

int main(void){

double vol, ab, h, a;

scanf("%lf%lf", &h, &a);

ab = (3 * (a * a) * sqrt(3)) / 2 ;
vol = (ab * h) / 3  ;


printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n " , vol );


    return 0;
}