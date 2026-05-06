
#include <stdio.h>


int main(void){

int horas;
double valort, valor1, valor2;

scanf("%d", &horas);

valor1 = (horas / 3) * 10;
valor2 = (horas % 3) * 5;
valort = valor1 + valor2;

printf("O VALOR A PAGAR E = %.2lf\n", valort);






	return 0;
}
