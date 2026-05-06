#include <stdio.h>
#include <string.h>

#define TAMANHO_STRING 500

int comparar_strings(const char str1[], const char str2[]) {
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] < str2[i]) {
			return -1;
		}
		if (str1[i] > str2[i]) {
			return 1;
		}
		i++;
	}

	if (str1[i] == '\0' && str2[i] == '\0') {
		return 0;
	}

	return str1[i] == '\0' ? -1 : 1;
}

void remover_quebra_linha(char texto[]) {
	int tamanho = strlen(texto);

	if (tamanho > 0 && texto[tamanho - 1] == '\n') {
		texto[tamanho - 1] = '\0';
	}
}

int main(void) {
	int i, quantidade;
	char s1[TAMANHO_STRING], s2[TAMANHO_STRING];

	scanf("%d", &quantidade);
	getchar();

	for (i = 0; i < quantidade; i++) {
		fgets(s1, TAMANHO_STRING, stdin);
		fgets(s2, TAMANHO_STRING, stdin);

		remover_quebra_linha(s1);
		remover_quebra_linha(s2);

		printf("%d\n", comparar_strings(s1, s2));
	}

	return 0;
}
