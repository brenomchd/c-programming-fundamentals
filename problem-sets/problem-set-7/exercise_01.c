#include <stdio.h>
struct f{
    float numerador;
    char barra;
    float denominador;
};
int main(void){

    int n, i, j;
    scanf("%d", &n);
    if(n < 1 || n > 30) return 0;

    int m[n], k, l;

    struct f fracao[50];

    for(i = 0; i < n; i++){
        scanf("%d", &m[i]);
        for(j = 0; j < m[i]; j++){
            scanf("%f %c %f", &fracao[j].numerador, &fracao[j].barra, &fracao[j].denominador);
        }
        l = 0;
        printf("Caso de teste %d\n", i + 1);
        for(j = 0; j < m[i]; j++){
            for(k = j + 1; k < m[i]; k++){
                if(fracao[j].numerador / fracao[j].denominador == fracao[k].numerador / fracao[k].denominador){
                    printf("%.0f/%.0f equivalente a %.0f/%.0f\n", fracao[j].numerador, fracao[j].denominador, fracao[k].numerador, fracao[k].denominador);
                    l++;
                }
            }
        }
        if(l == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
    }


    return 0;
}
