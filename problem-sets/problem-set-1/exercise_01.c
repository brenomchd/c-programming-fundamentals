#include <stdio.h>

int main(void){

    const double pi = 3.14159;
    double ca, cl, raio, altura, atcil, acir, alcil;

    scanf("%lf%lf", &raio, &altura);

    ca= 1*100;
    acir= pi*raio*raio;
    alcil= 2*pi*raio*altura;
    atcil= 2*acir+alcil;
    cl= atcil*ca;

    printf("O VALOR DO CUSTO E = %.2lf\n",cl);






    return 0;
}