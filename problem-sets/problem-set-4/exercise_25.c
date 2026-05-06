#include <stdio.h>

int in_vet(int n, int v[]){
	int i;
	for(i = 0; i < 6; i++)
		if(v[i] == n) return 1;
	return 0;
}

int main(void){
	int i, j, n, nacertos, wsena = 0, wquina = 0, wquadra = 0, sena[6], aposta[6];
	for(i = 0; i < 6; i++)
		scanf("%d", &sena[i]);
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		nacertos = 0;
		for(j = 0; j < 6; j++)
			scanf("%d", &aposta[j]);
		for(j = 0; j < 6; j++)
			nacertos += in_vet(aposta[j], sena);
		switch(nacertos){
			case 6:
				wsena++;
				break;
			case 5:
				wquina++;
				break;
			case 4:
				wquadra++;
				break;
		}

	}
	if(!wsena)
		printf("Nao houve acertador para sena\n");
	else
		printf("Houve %d acertador(es) da sena\n", wsena);
	if(!wquina)
		printf("Nao houve acertador para quina\n");
	else
		printf("Houve %d acertador(es) da quina\n", wquina);
	if(!wquadra)
		printf("Nao houve acertador para quadra\n");
	else
		printf("Houve %d acertador(es) da quadra\n", wquadra);
	return 0;
}
