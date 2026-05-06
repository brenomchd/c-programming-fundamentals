#include <stdio.h>

int main(void) {
	double numeros[4];
	int i, j;

	scanf("%lf%lf%lf%lf", &numeros[0], &numeros[1], &numeros[2], &numeros[3]);

	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 4; j++) {
			if (numeros[i] < numeros[j]) {
				double auxiliar = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = auxiliar;
			}
		}
	}

	printf("%.2lf, %.2lf, %.2lf, %.2lf\n", numeros[0], numeros[1], numeros[2], numeros[3]);

	return 0;
}
