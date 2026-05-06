#include <stdio.h>
int main(void){

	int n, i, j, tr = 0;

	scanf("%d", &n);

	if(n <= 1 || n > 1000) return 0;

	int m[n][n], mt[n][n], r[n][n];

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			scanf("%d", &m[i][j]);
			mt[j][i] = m[i][j];
			if(i == j) tr = tr + m[i][j];
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			r[i][j] = (m[i][j]  * tr) + mt[i][j];
			printf("%d", r[i][j]);
			if(j < n - 1) printf(" ");
		}
		printf("\n");
	}


	return 0;
}
