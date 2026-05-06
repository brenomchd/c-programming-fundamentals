#include <stdio.h>
int main(void){

    int aux, nele, n1, n2, seqcorrente = 0, seqmax = 0;

    scanf("%d", &nele);

    for(aux = 0; aux < nele; aux++){
    	scanf("%d", &n2);
		if (n1 < n2){
			seqcorrente++;
			if(seqcorrente > seqmax) seqmax = seqcorrente;
		}
    	else seqcorrente = 0;
    	n1 = n2;
	}

    printf("O comprimento do segmento crescente maximo e: %d\n", seqmax);


    return 0;
}
