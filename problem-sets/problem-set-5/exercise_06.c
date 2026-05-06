#include <stdio.h>
#include <string.h>
#define tamanho_string 200
int main(void){

    int i, j, ns, aux;
    char s[tamanho_string];

	while(scanf("%s", s) != EOF){
		ns = strlen(s);

		for (i = ns - 1, j = 0; i >= 0; i--, j++){
			if (s[j] == s[i]) aux++;
		}
		if(aux == ns) printf ("sim\n");
		else printf("nao\n");
		aux = 0;
   }

    return 0;
}
