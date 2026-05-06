#include <stdio.h>

int main(void) {
	int populacao_a, populacao_b, anos = 0;

	scanf("%d %d", &populacao_a, &populacao_b);

	while (populacao_a < populacao_b) {
		populacao_a += populacao_a * 0.03;
		populacao_b += populacao_b * 0.01;
		anos++;
	}

	printf("ANOS = %d\n", anos);

	return 0;
}
