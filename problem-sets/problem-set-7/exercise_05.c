#include <stdio.h>
#include <string.h>
struct c{
	int cdg;
	double vcred;
	char nomec[100];
};
struct a{
	char nomea[500];
	int cdga;
	int ncred;
};
int main(void){

	int n, m, i, j;
	scanf("%d", &n);
	getchar ();
	if(n < 4 || n > 30) return 0;

	struct c cursos[n];

	for(i = 0; i < n; i++){
		scanf("%d %lf", &cursos[i].cdg, &cursos[i].vcred);
		getchar ();
		scanf("%[^\n]", cursos[i].nomec);
	}

	scanf("%d", &m);
	getchar ();
	if(m < 1 || m > 1000) return 0;

	struct a aluno[m];

	for(i = 0; i < m; i++){
		scanf("%[^\n]", aluno[i].nomea);
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

	return 0;
}
