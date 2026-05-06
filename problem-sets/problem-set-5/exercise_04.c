#include <stdio.h>
#include <string.h>
#define tamanho_string 5
int main(void){

    int n, i, j = 0, ns;
    char s[tamanho_string];

    scanf ("%d", &n);

    for(i = 0; i < n; i++){
        scanf ("%s", s);
        ns = strlen (s);
        if(ns > 3) printf("3\n");
        else{
        	if((s[j] == 'o' && s[j + 1] == 'n') || (s[j] == 'o' && s[j + 2] == 'e') || (s[j+1] == 'n' && s[j + 2] == 'e')) printf("1\n");
        	else printf("2\n");
		}
    }



    return 0;
}
