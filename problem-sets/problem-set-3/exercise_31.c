#include <stdio.h>

int main(void){
	int n, i;
	long long int fatorial;
	double soma, x, potencia;
	scanf("%lf%d", &x, &n);
	for(i = 0, fatorial = 1, potencia = 1, soma = 0; i <= n; i++, soma += potencia/fatorial, potencia *=x, fatorial *=i)
		;
	printf("e^%.2lf = %.6lf\n", x, soma);
	return 0;
}
