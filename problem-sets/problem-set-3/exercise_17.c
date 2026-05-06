#include <stdio.h>
int main(void){

    double n, r=1, e, aux;

    scanf("%lf %lf", &n, &e);

    r = (r + (n / r)) / 2;
	aux = n - (r * r);
	if(aux < 0) aux = -aux;
    printf("r: %.9lf, erro: %.9lf\n", r, aux);


    while(e < aux){
    	r = (r + (n / r)) / 2;
    	aux = n - (r * r);
    	if(aux < 0) aux = -aux;
    	printf("r: %.9lf, erro: %.9lf\n", r, aux);
	}



    return 0;
}
