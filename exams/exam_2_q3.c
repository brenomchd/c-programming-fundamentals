#include <stdio.h>

int main(void) {
	int total_nascimentos, sexo, meses;
	int mortos = 0, masculinos = 0, femininos = 0, mortos_ate_24_meses = 0;

	scanf("%d", &total_nascimentos);

	while (scanf("%d", &sexo) == 1 && sexo < 2) {
		scanf("%d", &meses);

		mortos++;
		if (sexo == 0) {
			masculinos++;
		} else if (sexo == 1) {
			femininos++;
		}

		if (meses <= 24) {
			mortos_ate_24_meses++;
		}
	}

	printf("PORCENTAGEM DE MORTOS = %.2lf\n", (mortos * 100.0) / total_nascimentos);
	printf(
		"PORCENTAGEM DE MASCULINOS MORTOS = %.2lf\n",
		(masculinos * 100.0) / total_nascimentos
	);
	printf(
		"PORCENTAGEM DE FEMININOS MORTOS = %.2lf\n",
		(femininos * 100.0) / total_nascimentos
	);
	printf(
		"PORCENTAGEM DE MORTOS COM ATE 24 MESES DE VIDA = %.2lf\n",
		(mortos_ate_24_meses * 100.0) / total_nascimentos
	);

	return 0;
}
