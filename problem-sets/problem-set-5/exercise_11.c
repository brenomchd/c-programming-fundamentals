#include <stdio.h>
#include <string.h>
#define tamanho_string 5000
int main(void){

    int i, j, k, ns, alit[100];
    char s[tamanho_string], pl;

    while(scanf("%[^\n]", s) != EOF){
    	getchar();
    	k = 0;
        ns = strlen(s);
        pl = s[0];
        for(i = 0; i < 100; i++){
        	alit[i] = 0;
		}
        for (i = 0; i < ns; i++){
            if ((s[i] == 32 && s[i + 1] == pl) || (s[i] == 32 && s[i + 1] == pl + 32)) alit[k]++;
            else if ((s[i] == 32 && s[i + 1] != pl) || (s[i] == 32 && s[i + 1] != pl + 32)){
            	pl = s[i + 1];
            	k += 1;
			}
        }
        for (i = 0, j = 0; i < ns; i++){
        	if(alit[i] > 0) j++;
		}
        printf("%d\n", j);
   }

    return 0;
}
