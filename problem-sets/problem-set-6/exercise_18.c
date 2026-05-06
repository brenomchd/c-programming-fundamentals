#include <stdio.h>

void ordena(int n, int j, int M[][n]){
	int i, k, aux;
	for(i = 0; i < n; i++){
		for(k = i; k < n; k++){
			if(M[k][j] < M[i][j]){
				aux = M[k][j];
				M[k][j] = M[i][j];
				M[i][j] = aux;
			}
		}
	}
}

int main(void){
	int n, i, j;
	scanf("%d", &n);
	int M[n][n];
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &M[i][j]);
	for(j = 0; j < n; j++)
		ordena(n, j, M);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			printf("%d ", M[i][j]);
		printf("\n");
	}
	return 0;
}
