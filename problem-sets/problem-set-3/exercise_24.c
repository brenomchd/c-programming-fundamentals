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
	int a, b, c, mmc = 1, primo = 2;
	scanf("%d%d%d", &a, &b, &c);
	while(a != 1 || b != 1 || c != 1){
		if((a % primo == 0) || (b % primo == 0) || (c % primo == 0)){
			printf("%d %d %d :%d\n", a, b, c, primo);
			if(a % primo == 0)
				a = a / primo;
			if(b % primo == 0)
				b = b / primo;
			if(c % primo == 0)
				c = c / primo;
			mmc *= primo;
		}
		else
			primo = prox_primo(primo);
	}
	printf("MMC: %d\n", mmc);
	return 0;
}


