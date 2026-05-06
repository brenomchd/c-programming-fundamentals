#include <stdio.h>
#include <string.h>

#define TAMANHO_STRING 500

int main(void) {
	char linha[TAMANHO_STRING];

	while (fgets(linha, TAMANHO_STRING, stdin) != NULL) {
		int i;
		int tamanho = strlen(linha);

		if (tamanho > 0 && linha[tamanho - 1] == '\n') {
			linha[--tamanho] = '\0';
		}

		for (i = tamanho - 1; i >= 0; i--) {
			printf("%c", linha[i]);
		}
		printf("\n");
	}

	return 0;
}
