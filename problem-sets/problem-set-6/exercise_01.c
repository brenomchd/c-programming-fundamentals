#include <stdio.h>
#define tamanhho 2
int main(void){

	double m[tamanhho][tamanhho], det;

	scanf("%lf%lf%lf%lf", &m[0][0], &m[0][1], &m[1][0], &m[1][1]);

	det = m[0][0] * m[1][1] - m[0][1] * m[1][0];

	printf("%.2lf\n", det);

	return 0;
}
