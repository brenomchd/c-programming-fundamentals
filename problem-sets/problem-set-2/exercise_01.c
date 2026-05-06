#include <stdio.h>


int main(void){

double n1, n2, n3, media;

scanf("%lf %lf %lf", &n1, &n2, &n3);

media = (n1 + n2 + n3) / 3;

if (media >= 6.0)
{
    printf("MEDIA = %.2lf\n", media);
    printf("APROVADO");
}
else
{
    printf("MEDIA = %.2lf\n", media);
    printf("REPROVADO");
}


    return 0;
}
