#include <stdio.h>
#include <string.h>
#define tamanho_string 10000
int main(void){

    int t, n, i, j, op;
    char a[tamanho_string], b[tamanho_string];

    scanf("%d", &t);

    for(i = 0; i < t; i++){
    	scanf("%s%s", a, b);
    	n = strlen(a);
    	op = 0;
    	for(j = 0; j < n; j++){
    		if(a[j] < b[j]){
    			while(a[j] < b[j]){
    				a[j] = a[j] + 1;
    				op++;
				}
			}
    		else if(a[j] > b[j]){
    			while(a[j] < 122){
    				a[j]++;
    				op++;
				}
				if(b[j] == 97) op++;
				else{
					while(b[j] >= 97){
						b[j]--;
						op++;
					}
    			}
			}
		}
		printf("%d\n", op);
	}

    return 0;
}
