#include <stdio.h>

int main(void){

	int n, aux, np;
	double perpop, perg, perarq, percad, pop, g, arq, cad, vpop, vg, varq, vcad, vtotal[30000];

	scanf("%d", &n);

	for(aux = 0; aux < n; aux++){
		scanf ("%d %lf %lf %lf %lf", &np , &perpop, &perg, &perarq, &percad);

		pop = (perpop/100) * np;
		g = (perg/100) * np;
		arq = (perarq/100) * np;
		cad = (percad/100) * np;

		vpop = pop * 1.00;
		vg = g * 5.00;
		varq = arq * 10.00;
		vcad = cad * 20.00;

		vtotal[aux] = vpop + vg + varq + vcad;


	}


	for(aux = 0; aux < n; aux++){
		printf("A RENDA DO JOGO N. %d E = %.2lf\n", aux + 1, vtotal[aux]);
	}



    return 0;
}

