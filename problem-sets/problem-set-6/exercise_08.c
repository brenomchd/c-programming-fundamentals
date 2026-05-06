#include <stdio.h>
#define tamanhho 100
int main(void){

    int m[tamanhho][tamanhho], lin, col, lb, vb, i, j, k;

    scanf("%d%d%d%d", &lin, &col, &lb, &vb);

    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            m[i][j] = 0;
        }
    }

    for (i = 0; i < lb; i++){
        for (j = 0; j < col; j++){
            m[i][j] = vb;
        }
    }

    for (i = 0, k = lin - 1; i < lb; i++, k--){
        for (j = 0; j < col; j++){
            m[k][j] = vb;
        }
    }

    for(i = 0; i < lin; i++){
        for (j = 0; j < lb; j++){
            m[i][j] = vb;
        }
    }

    for(i = 0; i < lin; i++){
        for (j = 0, k = col - 1; j < lb; j++, k--){
            m[i][k] = vb;
        }
    }

    printf("P2\n");
    printf("%d %d\n", col, lin);
    printf("255\n");

    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }


    return 0;
}
