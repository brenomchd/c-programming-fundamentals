#include <stdio.h>
#define tamanhho 10
int main(void){

	int m = -1, n = - 1, i, j, matriz[tamanhho][tamanhho];

	while(m <= 0 || m > 10){
		scanf("%d", &m);
	}

	while(n <= 0 || n > 10){
		scanf("%d", &n);
	}

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	for(i = 0; i < m; i++){
		printf("linha %d: ", i + 1);
		for(j = 0; j < n; j++){
			printf("%d", matriz[i][j]);
			if(j < n - 1) printf(",");
		}
		printf("\n");
	}

	return 0;
}
