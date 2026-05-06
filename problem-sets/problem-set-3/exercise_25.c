#include <stdio.h>

int calcula_impar(int n){
	int i, impar = -1, soma, copia;
	while(1){
		impar += 2;
		for(soma = 0, i = 0, copia = impar; i < n; i++){
			soma += copia;
			copia += 2;
		}
		if(soma == n * n * n) return impar;
	}
}

int main(void){
	int i, m, n, impar, j;
	scanf("%d", &m);
	for(i = 0, n = 1; i < m; i++, n++){
		impar = calcula_impar(n);
		printf("%d*%d*%d = %d", n, n, n, impar);
		for(j = 1; j < n; j++){
			impar += 2;
			printf("+%d", impar);
		}
		printf("\n");
	}
	return 0;
}



