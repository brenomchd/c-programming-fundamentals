#include <stdio.h>
int main(void){

    double salmin, gastokw, custoporkw, custodoc, custocomdesc;

    scanf("%lf%lf",&salmin,&gastokw);

    custoporkw = (0.7 * salmin) / 100;
    custodoc = custoporkw * gastokw;
    custocomdesc = custodoc * 0.9;

    printf("Custo por kW: R$ %.2lf\nCusto do consumo: R$ %.2lf\nCusto com desconto: R$ %.2lf\n",custoporkw,custodoc,custocomdesc);








    return 0;
}

