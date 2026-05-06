#include <stdio.h>

int main(void){

    int mat, pre, aux;
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, tf, nf;

    aux = 1;
	while(aux > 0){

    	scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d",&mat, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &tf, &pre);

    	aux = mat;
    	if(mat > 0){

    	nf = 0.7 * ((p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8)/8) + 0.15 * ((l1 + l2 + l3 + l4 + l5)/5) + 0.15 * tf;

    	if(nf >= 6 && pre >= 0.75 * 128) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, nf);
    	else if(nf < 6 && pre >= 0.75 * 128) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mat, nf);
    	else if(nf >= 6 && pre < 0.75 * 128) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", mat, nf);
    	else if(nf < 6 && pre < 0.75 * 128) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", mat, nf);

		}
	}


    return 0;
}
