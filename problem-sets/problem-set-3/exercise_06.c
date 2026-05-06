#include <stdio.h>

int main(void){

	int n, aux;
	double soma, nx;

	scanf("%d", &n);

	soma = 0;
	nx = 1;

	if(n <= 1){
		printf("Numero invalido!\n");
		return 0;
	}

	else{
		for(aux = 0; aux < n; aux++){
			soma = soma + 1/nx;
			nx = nx + 1;
		}

		printf("%.6lf\n", soma);

	}

    return 0;
}
