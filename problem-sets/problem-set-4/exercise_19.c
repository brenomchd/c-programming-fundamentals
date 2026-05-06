#include <stdio.h>
#define tamanho_vetor 1000
int main(void){

    int v[tamanho_vetor], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++){
        if(i == 0) printf("%d\n", v[i]);
        else if(v[i] != v[i - 1]) printf("%d\n", v[i]);
    }




    return 0;
}
