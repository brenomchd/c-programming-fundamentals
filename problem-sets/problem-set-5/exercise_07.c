#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tamanho_string 499
char *sprefixo(int n, char s[]){
	char *spre;
	spre = malloc((n + 1) * sizeof(char));
	strncpy(spre, s, n);
	spre[n] = '\0';
	return (spre);
}
int main(void){

    int nt, n, i;
    char s[tamanho_string], *str;

	scanf("%d", &nt);

	for(i = 0; i < nt; i++){
		scanf (" %d %[^\n]", &n, s);
        getchar ();
		printf("%s\n", str = sprefixo (n, s));
		free(str);
	}

    return 0;
}
