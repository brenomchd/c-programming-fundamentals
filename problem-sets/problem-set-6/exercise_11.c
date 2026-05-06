#include <stdio.h>
int main(void){

	int n, m, i, j, lin, col, cont = 0;

	scanf("%d%d", &n, &m);

	if(n < 3 || m < 3) return 0;

	int mat[n][m];

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j] == 1111){
				lin = i;
				col = j;
				cont++;
			}
		}
	}
	if (cont < 1) printf("WALLY NAO ESTA NA MATRIZ\n");
	else printf("%d %d\n", lin, col);

	return 0;
}
