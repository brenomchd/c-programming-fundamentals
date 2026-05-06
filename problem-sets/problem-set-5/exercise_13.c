#include <stdio.h>
#include <string.h>
#define tamanho_string 50
int main(void){

    int i, j, ns1, ns2;
    char s1[tamanho_string], s2[tamanho_string];

    while(scanf("%[^\n]", s1) != EOF){
    	getchar();
        ns1 = strlen(s1);
        for(i = 0, j = 0; i < ns1; i++){
        	if(s1[i] != 32){
        		s2[j] = s1[i];
        		j++;
			}
		}
		ns2 = strlen(s2);
        for(i = 0; i < ns2; i++){
        	if(s2[i] >= 65 && s2[i] < 97 && s2[0] != 32) s2[i] = s2[i] + 32;
		}
		if(s2[0] != 32) s2[0] = s2[0] - 32;
		else{
			for(i = 0; s2[i] <= 32; i++){
				if(s2[i + 1] != 32) s2[i + 1] = s2[i + 1] - 32;
			}
		}
		for(i = 2; i < ns2; i++){
			if(s2[i- 1] >= 97 && s2[i] != 32) s2[i] = s2[i] - 32;
			else if(s2[i - 1] == 32 && s2[i - 2] >= 97 && s2[i] >= 97) s2[i] = s2[i] - 32;
		}
		for(i = 0, j = 0; i < ns1; i++){
        	if(s1[i] != 32){
        		s1[i] = s2[j];
        		j++;
			}
		}
		for(i = 0; i < ns1; i++){
			printf("%c", s1[i]);
		}
		printf("\n");
	}

    return 0;
}
