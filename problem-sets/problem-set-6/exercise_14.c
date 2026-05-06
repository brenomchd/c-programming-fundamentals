#include <stdio.h>
int main(void){

	int n, m, i, j, menor, maior;
	double pmai = 0, pmen = 0, x;

	scanf("%d%d", &n, &m);
	if (n > 1000 || n < 1 || m > 1000 || m < 1) return 0;

	int mat[n][m];

	scanf("%d", &mat[0][0]);
	menor = mat[0][0];
	maior = mat[0][0];

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(i != 0 || j != 0) scanf("%d", &mat[i][j]);
			if(mat[i][j] >= maior) maior = mat[i][j];
			else if(mat[i][j] <= menor) menor = mat[i][j];
		}
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			if(mat[i][j] == menor) pmen += 1;
			else if (mat[i][j] == maior) pmai += 1;
		}
	}

	x = m * n;
	pmen = (pmen / x) * 100;
	pmai = (pmai / x) * 100;

	printf("%d %.2lf%%\n", menor, pmen);
	printf("%d %.2lf%%\n", maior, pmai);

	return 0;
}
