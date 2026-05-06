#include <stdio.h>
int main(void){

	int lin, col, i, j, k = 0, seta = 0;

	scanf("%d %d", &lin, &col);

	if(lin > 10 || lin < 1 || col > 10 || col < 1){
		printf("Dimensao invalida\n");
		return 0;
	}

	int m[lin][col];

	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			scanf("%d", &m[i][j]);
		}
	}

	int borda[4] = {0, col - 1, lin - 1, 0};

	i = 0;
	j = 0;

	while(k < lin * col){
		switch(seta){
			case 0:
				while(j <= borda[1] && k < lin * col){
					printf("%d ", m[i][j]);
					j++;
					k++;
				}
				j--;
				i++;
				borda[0]++;
				seta = 1;
				break;
			case 1:
				while(i <= borda[2] && k < lin * col){
					printf("%d ", m[i][j]);
					i++;
					k++;
				}
				i--;
				j--;
				borda[1]--;
				seta = 2;
				break;
			case 2:
				while(j >= borda[3] && k < lin * col){
					printf("%d ", m[i][j]);
					j--;
					k++;
				}
				j++;
				i--;
				borda[2]--;
				seta = 3;
				break;
			case 3:
				while(i >= borda[0] && k < lin * col){
					printf("%d ", m[i][j]);
					i--;
					k++;
				}
				i++;
				j++;
				borda[3]--;
				seta = 0;
				break;
		}
	}

	printf("\n");

	return 0;
}
