#include <stdio.h>
#include <math.h>
#define tamanho_vetor 200
int main(void){

    int n, aux = 0, aux1;
    double x[tamanho_vetor], y[tamanho_vetor], z[tamanho_vetor], d;

    scanf("%d", &n);

    while(aux < n){
        scanf("%lf %lf %lf", &x[aux], &y[aux], &z[aux]);
        aux++;
    }
    aux = 0;

    while(aux < (n - 1)){
        aux1 = aux + 1;
        d = sqrt(((x[aux] - x[aux1]) * (x[aux] - x[aux1])) + ((y[aux] - y[aux1]) * (y[aux] - y[aux1])) + ((z[aux] - z[aux1]) * (z[aux] - z[aux1])));

        printf("%.2lf\n", d);

        aux++;
    }

    return 0;
}
