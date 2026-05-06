#include <stdio.h>
#define tam 100
int main(void){

    int mat[6][6], n, i, dist = 0;

    mat[0][0] = 0;
    mat[0][1] = 63;
    mat[1][0] = 63;
    mat[0][2] = 210;
    mat[2][0] = 210;
    mat[0][3] = 190;
    mat[3][0] = 190;
    mat[0][4] = -2000;
    mat[4][0] = 10;
    mat[0][5] = 190;
    mat[5][0] = 190;
    mat[1][1] = 0;
    mat[1][2] = 160;
    mat[2][1] = 160;
    mat[1][3] = 150;
    mat[3][1] = 150;
    mat[1][4] = 95;
    mat[4][1] = 95;
    mat[1][5] = 10;
    mat[2][2] = 0;
    mat[2][3] = 10;
    mat[3][2] = 10;
    mat[2][4] = 1;
    mat[2][5] = 10;
    mat[3][3] = 0;
    mat[3][4] = 10;
    mat[3][5] = 20;
    mat[4][2] = 7;
    mat[4][3] = 21;
    mat[4][4] = 0;
    mat[4][5] = 80;
    mat[5][4] = 80;
    mat[5][1] = 2;
    mat[5][2] = -2000;
    mat[5][3] = 41;
    mat[5][5] = 0;

    scanf("%d", &n);

    int v[tam];

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if(v[i] > 5 || v[i] < 0) dist = -10000;
    }
    for(i = 0; i < n - 1; i++){
        dist += mat[v[i]][v[i + 1]];
    }

    if(dist >= 0 && dist <= 50000) printf("%d\n", dist);
    else printf("rota invalida!\n");

    return 0;
}
