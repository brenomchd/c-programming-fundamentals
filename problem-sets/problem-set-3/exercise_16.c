#include <stdio.h>
int main(void){

    int aux = 1, mat;
    double hrst, valhr;

    while(aux > 0){
    	scanf("%d", &mat);
    	if(mat > 0){
    		scanf("%lf %lf", &hrst, &valhr);
			printf("%d %.2lf\n", mat, (hrst * valhr));
		}
		aux = mat;
	}

    return 0;
}
