#include <stdio.h>
#define tamanho_vetor 10000
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

    int v[tamanho_vetor], vpar[tamanho_vetor], vimpar[tamanho_vetor], n, ni = 0, np = 0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0){
        	vpar[np] = v[i];
        	np = np + 1;
		}
		else{
			vimpar[ni] = v[i];
			ni = ni + 1;
		}
    }

    bubble(vpar, np);
    for(i = 0; i < np; i++) {
        printf("%d\n", vpar[i]);
    }

    bubble(vimpar, ni);
    for(i = ni - 1; i >= 0; i--) {
        printf("%d\n", vimpar[i]);
    }

    return 0;
}
