#include <stdio.h>

int main(void) {
	int m, n, i, j;

	scanf("%d %d", &m, &n);
	if (m > 100 || m < 1 || n > 100 || n < 1) {
		return 0;
	}

	int mat[m][n], matransp[n][m];

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
			matransp[j][i] = mat[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d", matransp[i][j]);
			if (j < m - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
