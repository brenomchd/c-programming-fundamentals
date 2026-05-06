#include <stdio.h>
#define tamanhho 100
int main(void){

    int m, n, i, j, k = 1, matriz[tamanhho][tamanhho];

    scanf("%d%d", &m, &n);

    matriz[0][0] = 0;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if (j == 0){
                if(i % 2 == 0) matriz[i][j] = 0;
                else{
					matriz[i][j] = k;
					k++;
				}
            }
            else{
                if(matriz[i][j - 1] > 0) matriz[i][j] = 0;
                else{
					matriz[i][j] = k;
					k++;
				}
            }
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
