#include <stdio.h>
int main(void){

	int n, aux;
	double nf;
	scanf("%d", &n);

	aux = n;
	nf = n;

	if(n == 0) printf ("%d! = 1", n);

	else{
		while(aux > 1){
			nf = nf * (aux - 1);
			aux--;
		}
		printf("%d! = %.0lf", n, nf);
	}

	return 0;
}

