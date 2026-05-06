#include <stdio.h>

int main(void){
	int i, n, ordenada;
	double anterior, atual;
	scanf("%d", &n);
	while(n != 0){
		scanf("%lf", &atual);
		for(i = 1, ordenada = 1; i < n; i++){
			anterior = atual;
			scanf("%lf", &atual);
			if(atual < anterior) ordenada = 0;
		}
		if(ordenada) printf("ORDENADA\n");
		else printf("DESORDENADA\n");
		scanf("%d", &n);
	}
	return 0;
}
