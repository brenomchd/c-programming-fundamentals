#include <stdio.h>
#include <string.h>
struct p{
	char nome[50];
	double preco;
};
struct q{
	char nome[50];
	int quant;
};
int main(void){

	int n, m, l, k, i, j;
	double valor;
	scanf("%d", &n);

	struct p prod[10];
	struct q quanti[10];

	for(i = 0; i < n; i++){
		scanf("%d", &m);
		for(j = 0; j < m; j++){
			scanf("%s %lf", prod[j].nome, &prod[j].preco);
		}
		scanf("%d", &l);
		for(j = 0; j < l; j++){
			scanf("%s %d", quanti[j].nome, &quanti[j].quant);
		}
		for(j = 0, valor = 0; j < l; j++){
			for(k = 0; k < m; k++){
				if(strcmp(quanti[j].nome, prod[k].nome) == 0){
					valor = valor + quanti[j].quant * prod[k].preco;
				}
			}
		}
		printf("R$ %.2lf\n", valor);
	}
	return 0;
}
