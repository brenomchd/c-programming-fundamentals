#include <stdio.h>

int soma_divisores(int n){
	int soma, i;
	printf("1");
	for(i = 2, soma = 1; i <= n/2; i++)
		if(n % i == 0){
			soma += i;
			printf(" + %d", i);
		}
	printf(" = %d", soma);
	return soma;
}

int main(void){
	int n;
	scanf("%d", &n);
	if(n == soma_divisores(n)) printf(" (NUMERO PERFEITO)\n");
	else printf(" (NUMERO NAO PERFEITO)\n");
	return 0;
}
