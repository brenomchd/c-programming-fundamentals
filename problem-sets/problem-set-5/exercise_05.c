#include <stdio.h>
#include <string.h>
#define tamanho_string 10000
int main(void){

    long int m = 1, n = 1, soma;
    int i, ns;
    char s[tamanho_string];

    while(m != 0 && n != 0){
    	scanf ("%ld %ld", &m, &n);
    	if(m == 0 && n == 0) return 0;
    	else{
	    	soma = m + n;
	    	sprintf(s,"%ld", soma);
	    	ns = strlen (s);

	    	for(i = 0; i < ns; i++){
	    		if(s[i] != '0') printf("%c", s[i]);
			}
			printf("\n");
		}
	}

    return 0;
}
