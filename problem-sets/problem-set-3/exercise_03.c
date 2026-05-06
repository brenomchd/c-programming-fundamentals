#include <stdio.h>
int main(void){

	int n, aux;

	scanf("%d", &n);

	for(aux = 2; aux <= n; aux += 2) printf("%d^2 = %d\n", aux, aux * aux);

	return 0;
}
