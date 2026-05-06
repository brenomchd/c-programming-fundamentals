#include <stdio.h>
#define tamanho_vetor 2000
int main(void){

    int v[tamanho_vetor], j, k, diferencamenor = 2000, ncomp, t, nt[10], i = 0, diferenca;

    scanf("%d", &t);

    for(i = 0; i < t; i++){
    	scanf("%d", &nt[i]);
    	for(j = 0; j < nt[i]; j++){
    		scanf("%d", &v[j]);
		}
		diferencamenor = 2000;
		for(j = 0; j < nt[i]; j++){
			k = j + 1;
    		while(k < nt[i]){
    			diferenca = (v[j] - v[k]);
				if(diferenca < 0) diferenca = diferenca * (-1);
				if(diferencamenor > diferenca) diferencamenor = diferenca;
				k++;
			}
			k = 0;
		}
		ncomp = 0;
		while(nt[i] > 0){
			ncomp = ncomp + (nt[i] - 1);
			nt[i]--;
		}
		printf("%d %d\n", diferencamenor, ncomp);
	}

    return 0;
}
