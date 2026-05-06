#include <stdio.h>
#define tamanho_vetor 10000
int main(void){

    int n, nota[tamanho_vetor], mnota = 0, x = 0, y = 1, aux = 0;

	scanf("%d", &n);

    while(aux < n){
		scanf("%d", &nota[aux]);
		if(nota[aux] > mnota){
			mnota = nota[aux];
			x = aux;
		}
		aux++;
	}
	aux = 0;

	while(aux < (n - 1)){
		if(nota[n - 1] == nota[aux]) y++;
		aux++;
	}

	if(y == 1) printf("Nota %d, %d vez\n", nota[n - 1], y);
	else printf("Nota %d, %d vezes\n", nota[n - 1], y);
	printf("Nota %d, indice %d\n", mnota, x);

    return 0;
}
