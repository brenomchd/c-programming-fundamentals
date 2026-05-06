#include <stdio.h>
#define tamanho_vetor 1000
int main(void){

    int taluno[tamanho_vetor], n, k, i, j;

    scanf("%d %d", &n, &k);
    j = n;

    for(i = 0; i < n; i++){
    	scanf("%d", &taluno[i]);
    	if(taluno[i] > 0) j--;
	}
	if(j < k) printf("SIM\n");

	else{
		printf("NAO\n");
		for(i = n - 1; i >= 0; i--){
			if(taluno[i] <= 0) printf("%d\n", i + 1);
		}
	}


    return 0;
}
