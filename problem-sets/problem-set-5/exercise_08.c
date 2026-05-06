#include <stdio.h>
#include <string.h>
#define tamanho_string 499
int indicecar(char a, char str[]){
    int x, y;
    y = strlen(str);
    for (x = 0; x < y; x++){
        if(str[x] == a) return (x);

    }
    return -1;
}
int main(void){

    int n, i;
    char s[tamanho_string], c;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        scanf("%c", &c);
        getchar();
        scanf("%[^\n]", s);
        getchar();

        if (indicecar(c, s) > 0) printf("Caractere %c encontrado no indice %d da string.\n", c, indicecar(c, s));
        else printf("Caractere %c nao encontrado.\n", c);
    }

    return 0;
}
