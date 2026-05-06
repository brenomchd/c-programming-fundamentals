#include <stdio.h>
#define tamanho_vetor 100000
int main(void) {

	int v[tamanho_vetor], j=0, n, c = 0, i = 0, moda = 0;

	for (i = 0; i <= tamanho_vetor; i++) v[i] = 0;

	scanf("%d", &n);

	for (j = 0; j < n; j++){
		scanf("%d", &c);
		v[c]++;
	}

	for (c = 0; c < tamanho_vetor; c++) {
	 	if (v[c] > v[moda])
	    moda = c;
	}

	printf("%d\n", moda);
	printf("%d\n", v[moda]);


	return 0;
}
