#include <stdio.h>

int main(void){
	int n, sinal, i;
	long long int fatorial;
	double soma, x, potencia;
	scanf("%lf%d", &x, &n);
	for(fatorial = 1, sinal = 1, soma = 0, potencia = x, i = 0; i <= 2 * n; soma += sinal*potencia/fatorial, sinal = -sinal, i+=2, potencia *= x*x, fatorial *= (i+1) * i)
		;
	printf("seno(%.2lf) = %.6lf\n", x, soma);
	return 0;
}
