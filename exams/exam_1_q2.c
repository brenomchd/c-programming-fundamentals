#include <stdio.h>

int main(void) {
	double numeros[5];
	int i, j;

	for (i = 0; i < 5; i++) {
		scanf("%lf", &numeros[i]);
	}

	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (numeros[i] > numeros[j]) {
				double auxiliar = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = auxiliar;
			}
		}
	}

	printf(
		"%.2lf, %.2lf, %.2lf, %.2lf, %.2lf\n",
		numeros[0],
		numeros[1],
		numeros[2],
		numeros[3],
		numeros[4]
	);

	return 0;
}
