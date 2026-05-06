#include <stdio.h>
int main(void){

    int n;
    double mediai = 0, mediap = 0, ni = 0, np = 0, aux = 1, divisorp = 0, divisori = 0;

    while(aux != 0){
		scanf("%d", &n);
		if(n % 2 == 0 && n != 0){
			np = np + n;
			divisorp += 1;
		}

		else if(n % 2 != 0){
			ni = ni + n;
			divisori += 1;
		}
		aux = n;
	}

	if(np != 0)mediap = np / divisorp;
	else if(np == 0) mediap = 0;
	if (ni != 0)mediai = ni / divisori;
	else if(ni == 0) mediai = 0;


	printf("MEDIA PAR: %.2lf\n", mediap);
    printf("MEDIA IMPAR: %.2lf\n", mediai);


    return 0;
}
