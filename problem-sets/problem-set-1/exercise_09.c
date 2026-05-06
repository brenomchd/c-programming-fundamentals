#include <stdio.h>


int main(void){

int valorr, ncem, ncin, ndez, mum;

scanf("%d", &valorr);


ncem = valorr / 100;
ncin = (valorr % 100) / 50;
ndez = (((valorr % 100) % 50) / 10);
mum = ((((valorr % 100) %  50) % 10) / 1);


printf("NOTAS DE 100 = %d\n", ncem);
printf("NOTAS DE 50 = %d\n", ncin);
printf("NOTAS DE 10 = %d\n", ndez);
printf("MOEDAS DE 1 = %d\n", mum);


    return 0;
}
