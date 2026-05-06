#include <stdio.h>
int main(void){

    int n, n1, n2, aux, subseqcorrente = 1, subseqmax = 1;

    scanf("%d", &n);

    for(aux = 0; aux < n; aux++){
    	scanf("%d", &n2);
		if (n1 == n2){
			subseqcorrente++;
			if(subseqcorrente > subseqmax) subseqmax = subseqcorrente;
		}
    	else subseqcorrente = 1;
    	n1 = n2;
	}
    printf("A maior subsequencia de elementos iguais possui %d elementos. \n", subseqmax);

    return 0;
}
