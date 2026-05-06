#include <stdio.h>
int main(void){

	int K, aux;
	double n, resul, i, is, isub, im, idiv, s;

	scanf("%lf %lf %d %lf", &n, &i, &K, &s);

	resul = n;
	is = i;
	isub = i;
	im = i;
	idiv = i;

	printf("Tabuada de soma:\n");
	printf("%.2lf + %.2lf = %.2lf\n", n, i, n + i);
	for(aux = 1; aux < K; aux++){
		resul = n + is + s;
		printf("%.2lf + %.2lf = %.2lf\n", n, is + s, resul);
		is = is + s;
	}

	printf("Tabuada de subtracao:\n");
	printf("%.2lf - %.2lf = %.2lf\n", n, i, n - i);
	for(aux = 1; aux < K; aux++){
		resul = n - (isub + s);
		printf("%.2lf - %.2lf = %.2lf\n", n, isub + s, resul);
		isub = isub + s;
	}

	printf("Tabuada de multiplicacao:\n");
	printf("%.2lf x %.2lf = %.2lf\n", n, i, n * i);
	for(aux = 1; aux < K; aux++){
		resul = n * (im + s);
		printf("%.2lf x %.2lf = %.2lf\n", n, im + s, resul);
		im = im + s;
	}

	printf("Tabuada de divisao:\n");
	printf("%.2lf / %.2lf = %.2lf\n", n, i, n / i);
	for(aux = 1; aux < K; aux++){
		resul = n / (idiv + s);
		printf("%.2lf / %.2lf = %.2lf\n", n, idiv + s, resul);
		idiv = idiv + s;
	}



	return 0;
}
