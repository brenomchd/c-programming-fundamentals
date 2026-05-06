#include <stdio.h>
#define tamanho_vetor 10000
int mdig(int v[], int i, int j){
	int maior = 0, posicao;
	while(i < j){
		if(v[i] > maior){
			maior = v[i];
			posicao = i;
		}
		i++;
	}
	return posicao;
}
int main(void){

    int n, d, num, dig[tamanho_vetor], j, mposicao = -1;

    scanf("%d %d", &n, &d);

    while(n != 0 && d != 0){

        if(n == 0 && d == 0) return 0;

        scanf("%d", &num);

        for(j = n - 1; j >= 0; j--){
            dig[j] = num % 10;
            num = num / 10;
        }

		for(j = d; j > 0; j--){
			mposicao = mdig(dig, mposicao + 1, n - j);
			printf("%d", dig[mposicao]);
		}
		printf("\n");

		scanf("%d %d", &n, &d);
    }


    return 0;
}
