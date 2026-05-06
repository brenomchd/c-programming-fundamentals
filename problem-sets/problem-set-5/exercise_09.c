#include <stdio.h>
#include <string.h>
#define tamanho_string 24442
int main(void){

    int c, b , e, i, j;
    char s[tamanho_string], saux[tamanho_string];

    scanf("%d", &c);

    for(i = 0; i < c; i++){
        scanf ("%d%d", &b, &e);
        for(j = b; j <= e; j++){
            sprintf(saux, "%d", j);
            strcat (s, saux);
        }
        printf("%s", s);
        for(j = strlen(s) - 1; j >= 0; j--){
            printf("%c", s[j]);
        }
        printf("\n");
        s[0] = '\0';
        saux[0] = '\0';
    }

    return 0;
}

