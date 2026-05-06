#include <stdio.h>
#define tamanho_vetor 32
int main(void){

    int v[tamanho_vetor], aux, j;
    long long int n;

	while(scanf("%lld", &n) != EOF){
		j = 31;
		aux = 0;

		if(n == 0){
			printf("0");
		}
	    else{

		    while(j >= 0){
				v[j] = 0;
				j--;
			}

		    while(n >= 1){
				if((n % 2) > 0) v[aux] = 1;
				else if((n % 2) == 0) v[aux] = 0;
				n = n / 2;
				aux++;
			}
			aux = 31;

			while(!v[aux]) aux--;

			while(aux >= 0){
				printf("%d", v[aux]);
				aux--;
			}
		}
		printf("\n");
	}

    return 0;
}
