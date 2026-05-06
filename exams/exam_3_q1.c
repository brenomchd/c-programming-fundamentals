#include <stdio.h>
#include <limits.h>

int main(void) {
	int casos, i, j;

	scanf("%d", &casos);

	for (i = 0; i < casos; i++) {
		int quantidade, valor;
		int maior_par = INT_MIN, menor_impar = INT_MAX;
		int encontrou_par = 0, encontrou_impar = 0;

		scanf("%d", &quantidade);

		for (j = 0; j < quantidade; j++) {
			scanf("%d", &valor);

			if (valor % 2 == 0) {
				if (!encontrou_par || valor > maior_par) {
					maior_par = valor;
				}
				encontrou_par = 1;
			} else {
				if (!encontrou_impar || valor < menor_impar) {
					menor_impar = valor;
				}
				encontrou_impar = 1;
			}
		}

		if (encontrou_par) {
			printf("%d\n", maior_par);
		} else {
			printf("Nao ha valores pares.\n");
		}

		if (encontrou_impar) {
			printf("%d\n", menor_impar);
		} else {
			printf("Nao ha valores impares.\n");
		}
	}

	return 0;
}
