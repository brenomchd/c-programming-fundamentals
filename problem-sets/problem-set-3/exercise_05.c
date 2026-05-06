#include <stdio.h>

int main(void){

	int n, n1, r, ndeele, aux, soma;

	scanf("%d %d %d", &n1, &r, &ndeele);

	soma = 0;
	n = n1;


	for(aux = 1; aux <= ndeele; aux++){
		soma = soma + n;
		n = n + r;
	}

	printf("%d\n", soma);


    return 0;
}
