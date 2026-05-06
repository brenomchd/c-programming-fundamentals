#include <stdio.h>
struct a{
	int mat;
	int dia;
	int mes;
	int ano;
	char nome[200];
};
int ComparaDataNasc(struct a *p, struct a *po){
	if((*po).ano > (*p).ano) return 1;
	else if((*po).ano == (*p).ano) {
		if((*po).mes > (*p).mes) return 1;
		else if((*po).mes == (*p).mes){
			if((*po).dia > (*p).dia) return 1;
			else return 0;
		}
		else return 0;
	}
	else return 0;
}
int main(void){

	int n, i, j;
	scanf("%d", &n);
	getchar ();
	if(n < 1 || n > 30) return 0;

	struct a data[n];

	for(i = 0; i < n; i++){
		scanf("%d %d %d %d", &data[i].mat, &data[i].dia, &data[i].mes, &data[i].ano);
		getchar ();
		scanf("%[^\n]", data[i].nome);
	}

	struct a aux;

	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if (ComparaDataNasc(&data[i], &data[j]) == 1){
				aux = data[j];
				data[j] = data[i];
				data[i] = aux;
			}
		}
	}
	printf("\n");
	for(i = 0; i < n; i++){
		printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", data[i].mat, data[i].nome, data[i].dia, data[i].mes, data[i].ano);
	}

	return 0;
}
