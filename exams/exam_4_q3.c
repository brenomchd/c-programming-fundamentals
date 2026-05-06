#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_MERCADORIAS 20
#define MAX_CLIENTES 100
#define TAMANHO_BUFFER 1000

typedef struct {
	int codigo;
	float preco;
	char *nome;
} Mercadoria;

typedef struct {
	char *nome;
	int codigo_compra;
	int quantidade;
} Cliente;

char *duplicar_texto(const char texto[]) {
	char *copia = malloc((strlen(texto) + 1) * sizeof(char));

	if (copia != NULL) {
		strcpy(copia, texto);
	}

	return copia;
}

int buscar_mercadoria(Mercadoria mercadorias[], int quantidade, int codigo) {
	int i;

	for (i = 0; i < quantidade; i++) {
		if (mercadorias[i].codigo == codigo) {
			return i;
		}
	}

	return -1;
}

void liberar_mercadorias(Mercadoria mercadorias[], int quantidade) {
	int i;

	for (i = 0; i < quantidade; i++) {
		free(mercadorias[i].nome);
	}
}

void liberar_clientes(Cliente clientes[], int quantidade) {
	int i;

	for (i = 0; i < quantidade; i++) {
		free(clientes[i].nome);
	}
}

int main(void) {
	int total_mercadorias, total_clientes, i;
	char buffer[TAMANHO_BUFFER];

	scanf("%d", &total_mercadorias);
	if (total_mercadorias < 1 || total_mercadorias > MAX_MERCADORIAS) {
		return 0;
	}

	Mercadoria mercadorias[total_mercadorias];

	for (i = 0; i < total_mercadorias; i++) {
		scanf("%d %f", &mercadorias[i].codigo, &mercadorias[i].preco);
		scanf(" %999[^\n]", buffer);
		mercadorias[i].nome = duplicar_texto(buffer);
	}

	scanf("%d", &total_clientes);
	if (total_clientes < 1 || total_clientes > MAX_CLIENTES) {
		liberar_mercadorias(mercadorias, total_mercadorias);
		return 0;
	}

	Cliente clientes[total_clientes];

	for (i = 0; i < total_clientes; i++) {
		scanf(" %999[^\n]", buffer);
		clientes[i].nome = duplicar_texto(buffer);
		scanf("%d %d", &clientes[i].codigo_compra, &clientes[i].quantidade);
	}

	for (i = 0; i < total_clientes; i++) {
		int indice_mercadoria = buscar_mercadoria(
			mercadorias,
			total_mercadorias,
			clientes[i].codigo_compra
		);

		printf("Pedido de Compra do Cliente: %d\n", i + 1);
		printf("Nome do cliente: %s\n", clientes[i].nome);

		if (indice_mercadoria >= 0) {
			float preco = mercadorias[indice_mercadoria].preco;

			printf("Nome da mercadoria: %s\n", mercadorias[indice_mercadoria].nome);
			printf("Quantidade: %d\n", clientes[i].quantidade);
			printf("Valor da Mercadoria: %.2f\n", preco);
			printf("Valor total da Compra: %.2f\n", clientes[i].quantidade * preco);
		} else {
			printf("Quantidade: %d\n", clientes[i].quantidade);
		}

		printf("\n");
	}

	liberar_mercadorias(mercadorias, total_mercadorias);
	liberar_clientes(clientes, total_clientes);

	return 0;
}
