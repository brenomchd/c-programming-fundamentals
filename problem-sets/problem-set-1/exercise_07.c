#include <stdio.h>

int main(void){

double a, vk, vm, t, mt, mkg, s, w;

scanf("%lf%lf%lf", &mt, &a, &t);

mkg = mt * 1000;
vm = a * t;
vk = vm * 3.6;
s = (a * (t * t))/ 2;
w = (mkg * (vm * vm))/2;


printf("VELOCIDADE = %.2lf\n", vk);
printf("ESPACO PERCORRIDO = %.2lf\n", s);
printf("TRABALHO REALIZADO = %.2lf\n", w);


    return 0;
}