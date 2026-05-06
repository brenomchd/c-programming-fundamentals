#include <stdio.h>
#define tamanhho 100
int main(void){

	int n, i, j, m[tamanhho][tamanhho];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &m[i][j]);
		}
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j == i) printf("%d\n", m[i][j]);
		}
	}

	return 0;
}
