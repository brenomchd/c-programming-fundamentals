#include <stdio.h>

#define TAMANHO_VETOR 10000

void troca(int *x, int *y) {
	int aux = *x;
	*x = *y;
	*y = aux;
}

void bubble(int v[], int n) {
	int i, j;

	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (v[j] > v[j + 1]) {
				troca(&v[j], &v[j + 1]);
			}
		}
	}
}

int main(void) {
	int n, v[TAMANHO_VETOR], i;

	while (scanf("%d", &n) == 1 && n != 0) {
		for (i = 0; i < n; i++) {
			scanf("%d", &v[i]);
		}

		bubble(v, n);

		for (i = 0; i < n; i++) {
			printf("%d", v[i]);
			if (i < n - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
