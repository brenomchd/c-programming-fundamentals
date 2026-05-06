#include <stdio.h>
struct p{
	float coef;
	int expo;
};
int main(void){

	int n, i, j, k, l, m = 0, mexp;
	scanf("%d", &n);
	getchar();

	int n1[n], n2[n];

	char sinal;

	struct p poli1[n * 50];
	struct p poli2[n * 50];
	for(i = 0; i < n; i++){
		scanf("%c", &sinal);
		scanf("%d", &n1[i]);
		for(j = 0; j < n1[i]; j++){
			scanf("%f %d", &poli1[j].coef, &poli1[j].expo);
			if(j == 0) mexp = poli1[j].expo;
			if(poli1[j].expo > mexp) mexp = poli1[j].expo;
		}
		scanf("%d", &n2[i]);
		for(j = 0; j < n2[i]; j++){
			scanf("%f %d", &poli2[j].coef, &poli2[j].expo);
			getchar();
			if(poli2[j].expo > mexp) mexp = poli2[j].expo;
			for(k = 0; k < n1[i]; k++){
				if(poli2[j].expo == poli1[k].expo && sinal == 43) poli2[j].coef = poli1[k].coef + poli2[j].coef;
				else if(poli2[j].expo == poli1[k].expo && sinal != 43) poli2[j].coef = poli1[k].coef - poli2[j].coef;
			}
		}
		for(j = mexp; j >= 0; j--){
			for(k = 0; k < n2[i]; k++){
				if(poli2[k].expo == j && poli2[k].expo != 0 && poli2[k].coef > 0 &&  m == 0){
					printf("%+.2fX^%d", poli2[k].coef, poli2[k].expo);
					m++;
				}
				else if(poli2[k].expo == j && poli2[k].expo != 0 && poli2[k].coef < 0 &&  m == 0){
					printf("%.2fX^%d", poli2[k].coef, poli2[k].expo);
					m++;
				}
				else if(poli2[k].expo == j && poli2[k].expo == 0 && poli2[k].coef > 0 &&  m == 0) {
					printf("%+.2f\n", poli2[k].coef);
					m++;
				}
				else if(poli2[k].expo == j && poli2[k].expo == 0 && poli2[k].coef < 0 &&  m == 0){
					printf("%.2f\n", poli2[k].coef);
					m++;
				}
			}
			for(l = 0; l < n1[i]; l++){
				if(poli1[l].expo == j && poli1[l].expo != 0 && poli1[l].coef > 0 &&  m == 0){
					printf("%+.2fX^%d", poli1[l].coef, poli1[l].expo);
					m++;
				}
				else if(poli1[l].expo == j && poli1[l].expo != 0 && poli1[l].coef < 0 &&  m == 0){
					printf("%.2fX^%d", poli1[l].coef, poli1[l].expo);
					m++;
				}
				else if(poli1[l].expo == j && poli1[l].expo == 0 && poli1[l].coef > 0 &&  m == 0){
					printf("%+.2f\n", poli1[l].coef);
					m++;
				}
				else if(poli1[l].expo == j && poli1[l].expo == 0 && poli1[l].coef < 0 &&  m == 0){
					printf("%.2f\n", poli1[l].coef);
					m++;
				}
			}
			m = 0;
		}
		if(i < n - 1) getchar();
	}



	return 0;
}
