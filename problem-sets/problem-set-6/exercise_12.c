#include <stdio.h>
int main(void){

	int n, i, j, cont = 0;

	scanf("%d", &n);

	if(n < 1 || n > 100) return 0;

	int m[n + 1][n + 1];

	for (i = 0; i < n + 1; i++){
		for (j = 0; j < n + 1; j++){
			scanf("%d", &m[i][j]);
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if(m[i][j] == 1){
				if(m[i][j + 1] == 1 || m[i + 1][j] == 1 || m[i + 1][j + 1] == 1) printf("S");
				else printf("U");
			}
			else{
				if(m[i][j + 1] == 1) cont += 1;
				if (m[i + 1][j] == 1) cont += 1;
				if (m[i + 1][j + 1] == 1) cont += 1;
				if(cont > 1) printf("S");
				else printf("U");
			}
			cont = 0;
		}
		printf("\n");
	}


	return 0;
}
