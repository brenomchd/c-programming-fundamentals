#include <stdio.h>
#define tamanho_vetor 5000
int main(void){

    int vet[tamanho_vetor], n, i, k, l = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
    	scanf("%d", &vet[i]);
	}

	for(i = 0; i < n; i++){
		k = i + 1;
		while(k < n){
			if(vet[i] == vet[k]) l++;
			k++;
		}
		k = 0;
	}
	printf("%d\n", (n - (l * 2)));

    return 0;
}
