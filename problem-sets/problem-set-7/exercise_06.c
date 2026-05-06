#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){

	int n, i;
	scanf("%d", &n);
	getchar();
	if(n < 1 || n > 30) return 0;

	char buffer[10000], **nomes;

	nomes = malloc(n * sizeof(char *));

	for(i = 0; i < n; i++){
		scanf("%[^\n]", buffer);
		getchar();
		nomes[i] = malloc((strlen(buffer) + 1) * sizeof(char));
		strcpy(nomes[i], buffer);
		printf("%s\n", nomes[i]);
	}

	for(i = 0; i < n; i++){
		free(nomes[i]);
	}
	free(nomes);

	return 0;
}
