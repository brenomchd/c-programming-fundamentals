#include <stdio.h>

int prox_primo(int p){
	int i, ip;
	while(1){
		p++;
		ip = 1;
		for(i = 2; i * i < p && ip == 1; i++)
			if(p % i == 0)
				ip = 0;
		if(ip) return p;
	}
}

int main(void){
	int n, primo = 2, first_it = 1;
	scanf("%d", &n);
	if(n <= 0){
		printf("Fatoracao nao e possivel para o numero %d!\n", n);
		return 0;
	}
	printf("%d =", n);
	while(n != 1){
		if(n % primo == 0){
			if(first_it){
				printf(" %d", primo);
				first_it--;
			}
			else
				printf(" x %d", primo);
			n = n / primo;
		}
		else
			primo = prox_primo(primo);

	}
	printf("\n");
	return 0;
}
