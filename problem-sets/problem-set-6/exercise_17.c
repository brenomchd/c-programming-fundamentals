#include <stdio.h>
int main(void){

	int n, i, j, k, cont, quadra = 0, quina = 0, sena = 0;

	scanf("%d", &n);
	if(n < 1 || n > 50000) return 0;

	int apostas[n + 1][6];

	for(i = 0; i < n + 1; i++){
		for(j = 0; j < 6; j++){
			scanf("%d", &apostas[i][j]);
		}
	}

	for(i = 0; i < n; i++){
		cont = 0;
		for(j = 0; j < 6; j++){
			for(k = 0; k < 6; k++){
				if(apostas[i][k] == apostas[n][j]) cont++;
			}
		}
		if(cont == 4) quadra += 1;
		else if (cont == 5) quina += 1;
		else if (cont == 6) sena += 1;
	}

	if(sena > 0) printf("Houve %d acertador(es) da sena\n", sena);
	else printf("Nao houve acertador para sena\n");
	if (quina > 0) printf("Houve %d acertador(es) da quina\n", quina);
	else printf("Nao houve acertador para quina\n");
	if (quina > 0)printf("Houve %d acertador(es) da quadra\n", quadra);
	else printf("Nao houve acertador para quadra\n");


	return 0;
}
