#include <stdio.h>
#define tamanho_vetor 1000

void troca (int *x, int* y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}
void bubble(int v[], int n){
	int i, j;
	for(i = 1; i < n; i++){
		for(j = 0; j < n-i; j++){
			if(v[j] > v[j+1]){
				troca(&v[j], &v[j+1]);
			}
		}
	}
}
int main(void){
	int v[tamanho_vetor], n, i;

	scanf("%d", &n);

	for(i = 0;i < n; i++) {
    	scanf("%d", &v[i]);
	}

	bubble(v, n);

	for(i = 0;i < n; i++) {
    	printf("%d\n", v[i]);
	}

	return(0);
}
