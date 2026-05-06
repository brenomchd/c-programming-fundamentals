#include <stdio.h>
#define tam_vet 1000
int main(void){

    int n = 1, v[tam_vet], aux = 0, n1, nmaior = 0, indicemaior;

    while(n != 0){
    	scanf("%d", &n);

		while(aux < n){
    		scanf("%d", &n1);
			v[aux] = n1;

			if(n1 > nmaior){
				nmaior = n1;
				indicemaior = aux;
			}
			aux++;
		}
		if(n != 0) printf("%d %d\n", indicemaior, nmaior);
		aux = 0;
		nmaior = 0;
		indicemaior = 0;
	}

    return 0;
}
