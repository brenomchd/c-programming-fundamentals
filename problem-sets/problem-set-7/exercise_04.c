#include <stdio.h>
#include <math.h>
struct number{
	float u;
	float x;
	float y;
	float z;
	float norma;
};
int main(void){

	int n, i, j;
	scanf("%d", &n);
	if(n < 2 || n > 1000) return 0;

	struct number num[n];

	for(i = 0; i < n; i++){
		scanf("%f %f %f %f", &num[i].u, &num[i].x, &num[i].y, &num[i].z);
		num[i].norma = sqrt((num[i].u * num[i].u) + (num[i].x * num[i].x) + (num[i].y * num[i].y) + (num[i].z * num[i].z));
	}

	struct number aux;

	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(num[i].norma > num[j].norma){
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}

	for(i = 0; i < n; i++){
		printf("Vetor: (%.2f, %.2f, %.2f, %.2f) Norma: %.2f\n", num[i].u, num[i].x, num[i].y, num[i].z, num[i].norma);
	}

	return 0;
}
