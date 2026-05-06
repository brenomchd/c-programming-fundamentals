#include <stdio.h>
#define tamanho_vetor 11
int main(void){

    int dig[tamanho_vetor], t, b1 = 0, b2 = 0, i, j, k = 0, l;

    scanf("%d", &t);

    for(i = 0; i < t; i++){
    	for(j = 0; j < 11; j++){
    		scanf("%d", &dig[j]);
		}
		for(j = 0; j < 9; j++){
    		b1 = b1 + (dig[j] * (j+1));
		}
		if(b1 % 11 == dig[9]) k += 1;
    	else if((b1 % 11) == 10 && dig[9] == 0) k += 1;

		l = 9;

		for(j = 0; j < 9; j++){
			b2 = b2 + (dig[j] * l);
    		l--;
		}
    	if(b2 % 11 == dig[10]) k += 1;
    	else if((b2 % 11) == 10 && dig[10] == 0) k += 1;
		if(k > 1) printf("CPF valido\n");
		else printf("CPF invalido\n");
		b1 = 0;
		b2 = 0;
		k = 0;
	}


    return 0;
}
