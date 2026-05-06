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

	int n, i;
	scanf("%d", &n);
	if(n < 2 || n > 1000) return 0;

	struct number num[n];

	for(i = 0; i < n; i++){
        scanf("%f %f %f %f", &num[i].u, &num[i].x, &num[i].y, &num[i].z);
    }

    float dist;

	for(i = 0; i < n; i++){
		dist = 0;
		if(i + 1 < n){
			dist = sqrt((num[i].u - num[i+1].u) * (num[i].u - num[i+1].u) + (num[i].x - num[i+1].x) * (num[i].x - num[i+1].x) + (num[i].y - num[i+1].y) * (num[i].y - num[i+1].y) + (num[i].z - num[i+1].z) * (num[i].z - num[i+1].z));
			if(dist < 0) dist = dist * (-1);
			printf("%.2f\n", dist);
		}
	}

	return 0;
}
