#include <stdio.h>
#define tam_vet 5000
int main(void){

    int n, v[tam_vet], aux = 0, n1, soma = 0;

    scanf("%d", &n);

    while(aux < n){
    	scanf("%d", &n1);
    	v[aux] = n1;
    	soma = soma + n1;
		aux++;
	}

	printf("%d\n", soma);

    return 0;
}
