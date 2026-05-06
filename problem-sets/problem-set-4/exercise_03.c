#include <stdio.h>
#define tam_vet 5000
int main(void){

    int n, v[tam_vet], aux = 0, n1;

    scanf("%d", &n);

    while(aux < n){
    	scanf("%d", &n1);
    	v[aux] = n1;
		aux++;
	}

	aux -= 1;

    while(aux >= 0){
    	printf("%d ", v[aux]);
    	aux--;
	}

	printf("\n");

    return 0;
}
