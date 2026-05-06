#include <stdio.h>

int main(void) {
	int data, dia, mes, ano;
	const char *meses[] = {
		"",
		"janeiro",
		"fevereiro",
		"marco",
		"abril",
		"maio",
		"junho",
		"julho",
		"agosto",
		"setembro",
		"outubro",
		"novembro",
		"dezembro"
	};

	scanf("%d", &data);

	dia = data / 1000000;
	mes = (data % 1000000) / 10000;
	ano = data % 10000;

	if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
		printf("Data invalida!");
		return 0;
	}

	printf("%d de %s de %d\n", dia, meses[mes], ano);

	return 0;
}
