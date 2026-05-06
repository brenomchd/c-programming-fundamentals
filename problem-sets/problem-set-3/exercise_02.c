#include <stdio.h>

int main(void){

	int ntc, aux;
	double tf[100], tc[100];

	scanf("%d", &ntc);

	for(aux = 0; aux < ntc; aux++){
		scanf ("%lf", &tf[aux]);
		tc[aux] = (5 * (tf[aux] - 32))/9;
	}

	for(aux = 0; aux < ntc; aux++){
		printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", tf[aux], tc[aux]);
	}

    return 0;
}

