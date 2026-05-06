#include <stdio.h>
#define tam_vet 10000
int main(void){

    int n = 1, v[tam_vet], aux = 0, n1, nmaior = 0, nmenores = 0, aux2 = 0;

    while(n != 0){
    	scanf("%d", &n);

		while(aux < n){
    		scanf("%d", &n1);
			v[aux] = n1;
			if(n1 > nmaior)	nmaior = n1;
			aux++;
		}

		aux = 0;

		while(aux2 <= nmaior){
			while(aux < n){
				if(v[aux] <= aux2) nmenores += 1;
				aux++;
			}
			if(n != 0) printf("(%d) %d\n", aux2, nmenores);
			nmenores = 0;
			aux = 0;
			aux2++;
		}
		aux2 = 0;
		nmaior = 0;
	}

    return 0;
}
