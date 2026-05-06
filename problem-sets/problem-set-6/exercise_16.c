#include <stdio.h>

int sobreposta(int x, int y, int i, int j, int logo[][x], int img[][y]){
	int a, b;
	for(a = 0; a < x; a++)
		for(b = 0; b < x && logo[a][b] == img[i+a][j+b]; b++)
			;
	if(a == x && b == x) return 1;
	return 0;
}

int main(void){
	int x, y, i, j;
	scanf("%d", &x);
	int logo[x][x];
	for(i = 0; i < x; i++)
		for(j = 0; j < x; j++)
			scanf("%d", &logo[i][j]);
	scanf("%d", &y);
	int img[y][y];
	for(i = 0; i < y; i++)
		for(j = 0; j < y; j++)
			scanf("%d", &img[i][j]);

	for(i = 0; i < y - x; i++)
		for(j = 0; j < y - x; j++)
			if(sobreposta(x, y, i, j, logo, img)){
				printf("sim\n");
				return 0;
			}
	printf("nao\n");

	return 0;
}
