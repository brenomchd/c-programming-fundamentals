#include <stdio.h>

int main(void){

int conta;
double consu, valor;
char tipocons;

scanf("%d %lf %c", &conta, &consu, &tipocons);

if (tipocons =='R')
{ valor = 5 + 0.05 * consu;

 printf("CONTA = %d\n", conta);
 printf("VALOR DA CONTA = %.2lf\n", valor);
 }

if (tipocons=='C')
{ valor = (consu - 80) * 0.25 + 500;

    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2lf\n", valor);
    }

if (tipocons=='I')
{ valor = (consu - 100) * 0.04 + 800;

    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2lf\n", valor);
     }


    return 0;
}

