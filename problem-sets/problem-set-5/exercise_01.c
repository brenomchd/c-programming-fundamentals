#include <stdio.h>
#include <string.h>
#define tamanho_vetor 50
int main(void){

    int n, i, j, na, nb;
    char a[tamanho_vetor], b[tamanho_vetor];

    scanf ("%d", &n);

    for(i = 0; i < n; i++){
        scanf ("%s %s", a, b);
        na = strlen (a);
		nb = strlen (b);
		if(nb >= na){
			for(j = 0; j < na; j++){
				printf("%c%c", a[j], b[j]);
			}
			for(; j < nb; j++){
				printf("%c", b[j]);
			}
		}
		if(na > nb){
			for(j = 0; j < nb; j++){
				printf("%c%c", a[j], b[j]);
			}
			for(; j < na; j++){
				printf("%c", a[j]);
			}
		}
		printf("\n");
    }



    return 0;
}
