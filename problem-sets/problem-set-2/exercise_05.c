#include <stdio.h>

int main(void){

double notanum;
char notacon;

scanf("%lf", &notanum);

if((notanum >= 9.0) && (notanum <= 10.0))
{
notacon = 'A';

printf("NOTA = %.1lf CONCEITO = %c\n", notanum, notacon);   }


if((notanum >= 7.5) && (notanum <= 8.9) )
{
notacon = 'B';

printf("NOTA = %.1lf CONCEITO = %c\n", notanum, notacon);   }

if((notanum >= 6.0) && (notanum <= 7.4) )
{
notacon = 'C';

printf("NOTA = %.1lf CONCEITO = %c\n", notanum, notacon);   }


if((notanum >= 0.0) && (notanum <= 5.9))
{
notacon = 'D';

printf("NOTA = %.1lf CONCEITO = %c\n", notanum, notacon);   }




    return 0;
}
