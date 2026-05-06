#include <stdio.h>

int main(void) {
	int primeiro, quantidade, i;

	scanf("%d %d", &primeiro, &quantidade);

	if (primeiro % 2 == 0) {
		printf("PRIMEIRO NUMERO NAO E IMPAR\n");
		return 0;
	}

	for (i = 0; i < quantidade; i++) {
		printf("%d ", primeiro + (i * 2));
	}

	printf("\n");

	return 0;
}
