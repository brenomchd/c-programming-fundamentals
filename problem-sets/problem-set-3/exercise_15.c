#include <stdio.h>
int main(void){

    int n, divisores = 0, aux = 1;
    scanf("%d", &n);

    while(aux <= n){
    	if(n % aux == 0) divisores++;
    	aux++;
	}

    if(n == 1) printf("NAO PRIMO\n");
    else if(divisores == 2) printf("PRIMO\n");
    else if(n < 0) printf("Numero invalido!\n");
	else printf("NAO PRIMO\n");


    return 0;
}
