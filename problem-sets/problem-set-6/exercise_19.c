#include <stdio.h>

void multiplica(int n, double A[][n], double B[][n]){
	double mul[n][n];
	int i, j, k;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++){
			mul[i][j] = 0;
			for(k = 0; k < n; k++)
				mul[i][j] += A[i][k] * B[k][j];
		}
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			B[i][j] = mul[i][j];
}

int main(void){
	int n, k, i, j;
	scanf("%d%d", &n, &k);
	double A[n][n], P[n][n];
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%lf", &A[i][j]);
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			P[i][j] = A[i][j];
	for(i = 0; i < k-1; i++)
		multiplica(n, A, P);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			printf("%.3lf ", P[i][j]);
		printf("\n");
	}
	return 0;
}
