#include <stdio.h>
void desenharquad(int p, int x, int y, int cor, int lb, int est, int m[p][p]){
    int i, j;
    if((lb * 2) + 1 <= p && y - lb >= 0 && x - lb >= 0 && y + lb <= p - 1 && x + lb <= p - 1){
        if(est == 1){
            for(i = y - lb; i <= y + lb; i++){
                for(j = x - lb; j <= x + lb; j++){
                    if(i == y - lb || j == x - lb || i == y + lb || j == x + lb){
                        m[i][j]= cor;
                    }
                }
            }
        }
        else{
            for(i = y - lb; i <= y + lb; i++){
                for(j = x - lb; j <= x + lb; j++){
                    m[i][j]= cor;
                }
            }
        }
    }
}
int main(void){
    int p, cfundo, i, j, x = 1, y = 1, cor, lb, est;

    scanf("%d %d", &p, &cfundo);
    if (p > 200) return 0;

    int m[p][p];

    for(i = 0; i < p; i++){
        for(j = 0; j < p; j++){
            m[i][j] = cfundo;
        }
    }

    while(x != -1 && y != -1){
        scanf("%d %d", &x, &y);
        if(x <= 0 || y <= 0) break;
        scanf("%d %d %d", &cor, &lb, &est);
        desenharquad(p, x, y, cor, lb, est, m);

    }

    printf("P2\n");
    printf("%d %d\n", p, p);
    printf("255\n");
    for (i = 0; i < p; i++){
        for (j = 0; j < p; j++){
            printf("%d", m[i][j]);
            if(j < p - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
