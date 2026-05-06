#include <stdio.h>


int main(void){

	int mat, ndep;
 	double salmin, salfun, taximp, impbru, impn, impliq, resul;

 	scanf("%d %lf %d %lf %lf", &mat, &salmin, &ndep, &salfun, &taximp);

 	if(salfun > (12 * salmin)){
 		impbru = 0.2 * salfun;
	}

	else if(salfun > (5 * salmin)){
		impbru = 0.08 * salfun;
	}

	else impbru = 0;

	impn = (taximp / 100) * salfun;
	impliq = impbru - (300 * ndep);
	resul = impliq - impn;

	printf("MATRICULA = %d\n", mat);
	printf("IMPOSTO BRUTO = %.2lf\n", impbru);
	printf("IMPOSTO LIQUIDO = %.2lf\n", impliq);
	printf("RESULTADO = %.2lf\n", resul);

	if(resul > 0) printf(" IMPOSTO A PAGAR\n");

	else if(resul == 0) printf("IMPOSTO PAGO\n");

	else printf ("IMPOSTO A RECEBER\n");





    return 0;
}
