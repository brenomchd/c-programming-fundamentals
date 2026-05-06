#include <stdio.h>
#define tamanhho 100
int main(void){

	int m, n, i, j, matriz[tamanhho][tamanhho];

	scanf("%d%d", &m, &n);

	matriz[0][0] = 1;

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if (j == 0){
				if(i % 2 == 0) matriz[i][j] = 1;
				else matriz[i][j] = 0;
			}
			else{
				if(matriz[i][j - 1] == 1) matriz[i][j] = 0;
				else matriz[i][j] = 1;
			}
		}
	}

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
