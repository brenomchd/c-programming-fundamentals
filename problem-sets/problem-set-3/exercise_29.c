#include <stdio.h>

int soma_divisores(int n){
	int soma, i;
	for(i = 2, soma = 1; i <= n/2; i++)
		if(n % i == 0){
			soma += i;
		}
	return soma;
}

int sao_amigos(int a, int b){
	if((soma_divisores(a) == b) && (soma_divisores(b) == a) && (a < b)) return 1;
	return 0;
}

int main(void){
	int n, a = 220, b, i = 0;
	scanf("%d", &n);
	while(i < n){
		b = soma_divisores(a);
		if(sao_amigos(a, b)){
			printf("(%d,%d)\n", a, b);
			i++;
		}
		a++;
	}
	return 0;
}
