#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct c{
    int cdg;
    double vcred;
    char *nomec;
};
struct a{
    char *nomea;
    int cdga;
    int ncred;
};
int main(void){

    int n, m, i, j;
    scanf("%d", &n);
    getchar ();
    if(n < 4 || n > 30) return 0;

    char buffer[10000];

    struct c cursos[n];

    for(i = 0; i < n; i++){
        scanf("%d %lf", &cursos[i].cdg, &cursos[i].vcred);
        getchar ();
        scanf("%[^\n]", buffer);
        getchar ();
        cursos[i].nomec = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(cursos[i].nomec, buffer);
    }

    scanf("%d", &m);
    getchar ();
    if(m < 1 || m > 1000) return 0;

    struct a aluno[m];

    for(i = 0; i < m; i++){
        scanf("%[^\n]", buffer);
        getchar();
        aluno[i].nomea = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(aluno[i].nomea, buffer);
        scanf("%d %d", &aluno[i].cdga, &aluno[i].ncred);
        getchar ();
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(aluno[i].cdga == cursos[j].cdg){
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d ", aluno[i].nomea, cursos[j].nomec, aluno[i].ncred);
                printf("Valor Credito: %.2lf Mensalidade: %.2lf\n", cursos[j].vcred, (cursos[j].vcred * aluno[i].ncred));
            }
        }
    }
    for(i = 0; i < n; i++){
    	free(cursos[i].nomec);
	}
    for(i = 0; i < m; i++){
    	free(aluno[i].nomea);
	}

    return 0;
}
