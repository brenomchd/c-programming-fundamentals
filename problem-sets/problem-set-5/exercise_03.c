#include <stdio.h>
#include <string.h>
#define tamanho_string 10000
int main(void){

    int n, i, j, ns, l, v, c;
    char s[tamanho_string];

    scanf ("%d", &n);

    for(i = 0; i <= n; i++){
        scanf ("%[^\n]", s);
        getchar ();
        ns = strlen (s);
		for(j = 0, l = 0, v = 0, c = 0; j < ns; j++){
			if(s[j] >= 'A' && s[j] <= 'z'){
				l += 1;
				if(s[j] != 'a' && s[j] != 'e'  && s[j] != 'i' && s[j] != 'o' && s[j] != 'u' && s[j] != 'A' && s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U') c += 1;
				else v += 1;
			}
		}
		if(l > 0){
			printf("Letras = %d\n", l);
			printf("Vogais = %d\n", v);
			printf("Consoantes = %d\n", c);
		}
    }



    return 0;
}
