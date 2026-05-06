#include <stdio.h>
#include <string.h>
#define tamanho_max 256
void str_clean(char x[], char y[]){
	char aux[tamanho_max];
	int i, j, k, l, nx , ny;
	nx = strlen(x);
	ny = strlen(y);
	for(i = 0, l = 0; i < nx; i++){
		k = 0;
		for(j = 0; j < ny; j++){
			if(x[i] == y[j]) k++;
		}
		if(k == 0){
			aux[l] = x[i];
			l++;
		}
	}
	aux[l] = '\0';
	strcpy (x , aux);
}
int main(void) {
	char str[tamanho_max];
	char clr[tamanho_max];
	scanf("%[^\n]", str);
	scanf("\n%[^\n]", clr);
	str_clean(str, clr) ;
	printf("%s\n", str);

 return 0;
 }

