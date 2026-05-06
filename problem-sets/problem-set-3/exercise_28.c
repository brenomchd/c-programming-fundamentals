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
	int num, den, primo = 2;
	double decimal;
	scanf("%lf", &decimal);
	num = (int)(decimal * 100);
	den = 100;
	while(primo < num && primo < den){
		if(num % primo == 0 && den % primo == 0){
			num = num / primo;
			den = den / primo;
		}
		else
			primo = prox_primo(primo);
	}
	printf("%d/%d\n", num, den);
	return 0;
}
