#include <stdio.h>

#define MAX_MERCADORIAS 20
#define MAX_CLIENTES 100
#define MAX_NOME_MERCADORIA 30
#define MAX_NOME_CLIENTE 50

typedef struct {
	int codigo;
	float preco;
	char nome[MAX_NOME_MERCADORIA];
} Mercadoria;

typedef struct {
	char nome[MAX_NOME_CLIENTE];
	int codigo_compra;
	int quantidade;
} Cliente;

int buscar_mercadoria(Mercadoria mercadorias[], int quantidade, int codigo) {
	int i;

	for (i = 0; i < quantidade; i++) {
		if (mercadorias[i].codigo == codigo) {
			return i;
		}
	}

	return -1;
}

int main(void) {
	int total_mercadorias, total_clientes, i;

	scanf("%d", &total_mercadorias);
	if (total_mercadorias < 1 || total_mercadorias > MAX_MERCADORIAS) {
		return 0;
	}

	Mercadoria mercadorias[total_mercadorias];

	for (i = 0; i < total_mercadorias; i++) {
		scanf("%d %f", &mercadorias[i].codigo, &mercadorias[i].preco);
		scanf(" %29[^\n]", mercadorias[i].nome);
	}

	scanf("%d", &total_clientes);
	if (total_clientes < 1 || total_clientes > MAX_CLIENTES) {
		return 0;
	}

	Cliente clientes[total_clientes];

	for (i = 0; i < total_clientes; i++) {
		scanf(" %49[^\n]", clientes[i].nome);
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

	return 0;
}
