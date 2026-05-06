#include <stdio.h>
#define tamanhho 2
int main(void){

	int i, j;
	double m[tamanhho][tamanhho], a, b, c, d;

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%lf", &m[i][j]);
		}
	}
	a = m[0][0];
	b = m[1][0];
	c = m[0][1];
	d = m[1][1];

	m[0][0] = a * a + c * b;
	m[1][0] = b * a + b * d;
	m[0][1] = c * a + c * d;
	m[1][1] = b * c + d * d;

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%.3lf", m[i][j]);
			if(j == 0) printf(" ");
		}
		printf("\n");
	}

	return 0;
}
