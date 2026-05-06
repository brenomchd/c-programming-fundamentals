#include <stdio.h>
#define tamanho_vetor 100
void troca (int *x, int* y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
void bubble(int v[], int n){
    int i, j;
    for(i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            if(v[j] > v[j+1]){
                troca(&v[j], &v[j+1]);
            }
        }
    }
}
int main(void){

	int t, v[tamanho_vetor], i, j, k, somadupla, somat, traidor1 = 0, traidor2 = 0, anoesv[7];

	scanf("%d", &t);

	for(i = 0; i < t; i++){
		for(j = 0; j < 9; j++){
			scanf("%d", &v[j]);
			somat = somat + v[j];
		}
		for(j = 0; j < 9; j++){
			for(k = j + 1; k < 9; k++){
				somadupla = v[j] + v[k];
				if(somat - somadupla == 100){
					traidor1 = v[j];
					traidor2 = v[k];
				}
			}
		}
		for(j = 0, k = 0; j < 9; j++){
			if(v[j] != traidor1 && v[j] != traidor2){
				anoesv[k] = v[j];
				k++;
			}
		}
		bubble(anoesv, k);
		for(k = 0; k < 7; k++){
			printf("%d", anoesv[k]);
			if(k < 6 || i < t - 1) printf("\n");
		}
	}

	return 0;
}
