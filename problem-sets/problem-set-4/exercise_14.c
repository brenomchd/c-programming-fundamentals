#include <stdio.h>
#define tamanho_vetor 1000000

void troca (int *x, int* y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
void bubble(int v[], int n){
    int i, j;
    for(i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            if(v[j] > v[j+1]){
                troca(&v[j], &v[j+1]);
            }
        }
    }
}
int main(void){

    int v[tamanho_vetor], n, i;
    double mediana;

    scanf("%d", &n);

    for(i = 0;i < n; i++) {
        scanf("%d", &v[i]);
    }

    bubble(v, n);

	if((n % 2) == 0) {
		mediana = ((double)(v[(n/2) - 1] + v[n/2]) / 2);
	}
	else mediana = v[n/2];

	printf("%.2lf\n", mediana);


    return(0);
}
