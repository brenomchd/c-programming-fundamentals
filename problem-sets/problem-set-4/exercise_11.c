#include <stdio.h>
#define tamanho_vetor 1000
int main(void){

    int n, v[tamanho_vetor], w[tamanho_vetor], aux = 0, aux1 = 0, maiorn = 0, menorn;

	scanf("%d", &n);

    while(aux < n){
		scanf("%d", &v[aux]);
		if(v[aux] > maiorn){
			maiorn = v[aux];
		}
		menorn = maiorn;
		aux++;
	}
	aux = 0;
	while(aux < n){
		printf("%d", v[aux]);
		if(aux < (n - 1)) printf(" ");
		aux++;
	}
	printf("\n");
	aux -= 1;

	while(aux >= 0){
		w[aux1] = v[aux];
		if(w[aux1] < menorn){
			menorn = w[aux1];
		}
		aux--;
		aux1++;
	}

	aux1 = 0;
	while(aux1 < n){
		printf("%d", w[aux1]);
		if(aux1 < (n - 1)) printf(" ");
		aux1++;
	}

	printf("\n");
	printf("%d\n", maiorn);
	printf("%d\n", menorn);

    return 0;
}
