#include <stdio.h>

int main(void) {
	int matricula, horas_trabalhadas, numero_filhos;
	double salario_por_hora, salario_por_filho;
	double salario_total;

	scanf(
		"%d%d%lf%d%lf",
		&matricula,
		&horas_trabalhadas,
		&salario_por_hora,
		&numero_filhos,
		&salario_por_filho
	);

	salario_total = (salario_por_hora * horas_trabalhadas)
		+ (salario_por_filho * numero_filhos);

	printf("MATRICULA DO FUNCIONARIO = %d\n", matricula);
	printf("SALARIO TOTAL = %.2lf\n", salario_total);
	printf("FILHOS = %d\n", numero_filhos);

	return 0;
}
