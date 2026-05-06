#include <stdio.h>
#define tamanho_vetor 1000
int main(void){

    int n, i, j;
    double x[tamanho_vetor], y[tamanho_vetor], z[tamanho_vetor], maior = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%lf %lf %lf", &x[i], &y[i], &z[i]);
    }

    for(i = 0; i < n - 1; i++){
		if(i <= (n - 1)) j = i + 1;
		x[i] = x[j] - x[i];
		y[i] = y[j] - y[i];
		z[i] = z[j] - z[i];
    	if(x[i] < 0) x[i] = x[i] * (-1.0);
    	if(y[i] < 0) y[i] = y[i] * (-1.0);
    	if(z[i] < 0) z[i] = z[i] * (-1.0);
	}

    for(i = 0; i < n - 1; i++){
    	if(x[i] >= y[i] && x[i] >= z[i]) maior = x[i];
		else if(y[i] >= x[i] && y[i] >= z[i]) maior = y[i];
		else if(z[i] >= x[i] && z[i] >= y[i]) maior = z[i];
    	printf("%.2lf\n", maior);
	}

	printf("\n");


    return 0;
}
