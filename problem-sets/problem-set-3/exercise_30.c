#include <stdio.h>

int main(void){
	int n, i, sinal;
	long long int fatorial;
	double x, soma, potencia;
	scanf("%lf%d", &x, &n);
	for(i = 0, sinal = 1, fatorial = 1, soma = 0, potencia = 1; i <= 2 * n; i+=2){
		soma += (sinal * potencia)/fatorial;
		sinal *= -1;
		potencia = potencia * x * x;
		fatorial = fatorial * (i + 1) * (i + 2);
	}
	printf("cos(%.lf) = %.6lf\n", x, soma);
	return 0;
}
