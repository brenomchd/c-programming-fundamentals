#include <stdio.h>
#define tamanho_vetor 100000
int main(void){

    int n, v[tamanho_vetor], aux = 0, n1, m, m1, aux1 = 0, aux2;

    scanf("%d", &n);

    while(aux < n){
    	scanf("%d", &n1);
    	v[aux] = n1;
    	aux++;
    	n1 = 0;
	}

   	scanf("%d", &m);

    while(aux1 < m){

		aux = 0;
		aux2 = 0;

		scanf("%d", &m1);

		while(aux < n){
			if(m1 == v[aux]){
				printf("ACHEI\n");
				aux2++;
				aux = n - 1;
			}
			aux++;
		}
		if(aux2 < 1) printf("NAO ACHEI\n");
		aux1++;
	}



    return 0;
}

