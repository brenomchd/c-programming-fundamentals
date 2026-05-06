#include <stdio.h>
#define tam_vet 1000
int main(void){

    int n, v[tam_vet], aux = 0, n1, k, aux1 = 0;

    scanf("%d", &n);

	while(n < 1){
		n = 0;
		scanf("%d", &n);
		if(n > 1000) scanf("%d", &n);
	}

	while(n > 1000){
		n = 0;
		scanf("%d", &n);
	    if(n < 1) scanf("%d", &n);
	}

    while(aux < n){
    	scanf("%d", &n1);
    	v[aux] = n1;
    	n1 = 0;
		aux++;
	}

    aux = 0;
	scanf("%d", &k);

    while(aux < n){
		if(v[n1] >= k) aux1++;
		n1++;
		aux++;
	}

	printf("%d\n", aux1);


    return 0;
}
