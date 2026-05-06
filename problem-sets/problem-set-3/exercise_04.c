#include <stdio.h>

int main(void){

    int x, y, aux;

    scanf("%d %d", &x, &y);

    if(x % 2 == 0){

    	printf("%d ", x);

    	for(aux = 1; aux < y; aux++)  printf("%d ", x + 2 * aux);
	}

    else printf("O PRIMEIRO NUMERO NAO E PAR\n");

    return 0;
}
