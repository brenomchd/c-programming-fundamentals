#include <stdio.h>
int main(void){

    int m, n, i, j, maior, menor;

    scanf("%d %d", &m, &n);

    int matriz[m][n];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
            if(i == 0 && j == 0){
                maior = matriz[i][j];
                menor = matriz[i][j];
            }
            if(matriz[i][j] > maior) maior = matriz[i][j];
            else if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(matriz[i][j] == maior) printf("%d ", menor);
            else if(matriz[i][j] == menor) printf("%d ", maior);
            else printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
