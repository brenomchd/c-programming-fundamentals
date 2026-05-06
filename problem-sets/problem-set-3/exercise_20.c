#include <stdio.h>
int main(void){

	int m, n, aux1 = 1, aux2 = 3;
    scanf("%d %d", &m, &n);

    printf("(2,1)\n");

    while(aux2 <= m){
		while(aux1 <= n){
    		if(aux2 > aux1){
				printf("(%d,%d)", aux2, aux1);
				if(aux1 < n && (aux2 - aux1) > 1)printf("-");
			}
    		aux1++;
		}
		printf("\n");
		aux1 = 1;
   		aux2++;
	}



    return 0;
}
