#include <stdio.h>
int main(void){

    int n, aux1, aux2, aux3 = 1, aux4 = 1, aux5 = 1;

    scanf("%d", &n);
    aux1 = n;

    if(n == 1) printf("Campeonato invalido!\n");

    else{
    	while(aux1 > 0){
    		aux2 = aux1 - 1;
    		aux5 = aux4;
    		while(aux2 > 0){
    			printf("Final %d: ", aux3);
    			printf("Time%d X Time%d \n", aux4, aux5 + 1);
    			aux5++;
				aux3++;
				aux2--;
				}
			aux4++;
			aux1--;
		}
	}

    return 0;
}
