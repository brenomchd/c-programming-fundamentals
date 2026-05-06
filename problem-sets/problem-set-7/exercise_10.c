#include <stdio.h>
#include <stdlib.h>
struct f{
    float numerador;
    float denominador;
};
int main(void){

    int n, i, j, k, l, m;
    scanf("%d", &n);
    getchar ();
    if(n < 1 || n > 30) return 0;

    char c, num[250], den[250];

    struct f fracao[50];

    for(i = 0; i < n; i++){
    	j = 0;
    	c = ' ';
    	while(c != '\n'){
    		scanf("%[^/]", num);
    		c = getchar();
    		scanf("%[^ \n]", den);
    		c = getchar();
    		fracao[j].numerador = atof(num);
    		fracao[j].denominador = atof(den);
    		j++;
		}
        l = 0;
        printf("Caso de teste %d\n", i + 1);
        for(m = 0; m < j; m++){
            for(k = m + 1; k < j; k++){
                if(fracao[m].numerador / fracao[m].denominador == fracao[k].numerador / fracao[k].denominador){
                    printf("%.0f/%.0f equivalente a %.0f/%.0f\n", fracao[m].numerador, fracao[m].denominador, fracao[k].numerador, fracao[k].denominador);
                    l++;
                }
            }
        }
        if(l == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
    }


    return 0;
}
