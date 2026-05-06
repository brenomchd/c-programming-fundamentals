#include <stdio.h>

int na_coluna(int tab[][9], int j, int n){
	int i;
	for(i = 0; i < 9; i++)
		if(tab[i][j] == n) return 1;
	return 0;
}

int na_linha(int tab[][9], int i, int n){
	int j;
	for(j = 0; j < 9; j++)
		if(tab[i][j] == n) return 1;
	return 0;
}

int no_quadrado(int tab[][9], int i, int j, int n){
	int a, b;
	for(a = 0; a < 3; a++)
		for(b = 0; b < 3; b++)
			if(tab[i+a][j+b] == n) return 1;
	return 0;
}

int main(void){
	int tab[9][9], i, j;
	int p = 1, k;
	for(i = 0; i < 9; i++)
		for(j = 0;j < 9; j++)
			scanf("%d", &tab[i][j]);
	for(i = 0; i < 9; i++)
		for(j = 1; j <= 9; j++)
			p *= na_coluna(tab, i, j);
	for(i = 0; i < 9; i++)
		for(j = 1; j <= 9; j++)
			p *= na_linha(tab, i, j);
	for(i = 0; i < 9; i+=3)
		for(j = 0; j < 9; j+=3)
			for(k = 1; k <= 9; k++)
				p *= no_quadrado(tab, i, j, k);
	if(p) printf("valido\n");
	else printf("invalido\n");
	return 0;
}
