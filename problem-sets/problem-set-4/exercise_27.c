#include <stdlib.h>
#include <stdio.h>

int main(void){
	int q1, q2, i, j;
	int *v1, *v2, *v3;
	scanf("%d%d", &q1, &q2);
	v1 = malloc(q1 * sizeof(int));
	v2 = malloc(q2 * sizeof(int));
	v3 = malloc((q1 + q2) * sizeof(int));

	for(i = 0; i < q1; i++)
		scanf("%d", &v1[i]);
	for(i = 0; i < q2; i++)
		scanf("%d", &v2[i]);

	i = 0;
	j = 0;
	while(i < q1 && j < q2){
		if(v1[i] < v1[j]){
			v3[i + j] = v1[i];
			i++;
		}
		else{
			v3[i + j] = v2[j];
			j++;
		}
	}
	while(i < q1){
		v3[i + j] = v1[i];
		i++;
	}
	while(j < q2){
		v3[i + j] = v2[j];
		j++;
	}
	for(i = 0; i < q1 + q2; i++)
		printf("%d\n", v3[i]);
	free(v1);
	free(v2);
	free(v3);
	return 0;
}



