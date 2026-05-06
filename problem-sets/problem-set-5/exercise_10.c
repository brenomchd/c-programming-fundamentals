#include <stdio.h>
#include <string.h>
#define tamanho_string 1000
int main(void){

    int n, i, j, k, l, tamanho;
    char s1[tamanho_string], s2[tamanho_string];

    scanf("%d", &n);
    getchar();
    if(n < 1 || n > 10000) return 0;

    for(i = 0; i < n; i++){
    	scanf("%[^\n]", s1);
    	getchar();

    	tamanho = strlen(s1);
    	for(j = 0; j < tamanho; j++){
    		if((s1[j] >= 65 && s1[j] <= 90) || (s1[j] >= 97 && s1[j] <= 122)){
    			s1[j] = s1[j] + 3;
			}
		}
		for(k = 0, j = j - 1; k < tamanho; k++, j--){
			s2[k] = s1[j];
		}
		l = tamanho / 2;
		for(k = l; k < tamanho; k++){
			s2[k] = s2[k] - 1;
		}
		for (j = 0; j < tamanho; j++){
			printf("%c", s2[j]);
		}
		printf("\n");

	}



    return 0;
}
