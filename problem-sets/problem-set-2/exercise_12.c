#include <stdio.h>

 int main(void){

	int n, d, m, a;
	scanf("%d", &n);



	d = n / 1000000;
	m = (n % 1000000) / 10000;
	a = (n % 1000000) % 10000;




	if(d <= 0){
		printf("Data invalida!\n");
		return 0;
	}
	if(m <= 0){
		printf("Data invalida!\n");
		return 0;
	}
	if(m > 12){
		printf("Data invalida!\n");
		return 0;
	}



	else if(m == 1){
		if(d > 31) printf("Data invalida!");
		else printf("%d de janeiro de %d\n", d, a);
	}
	else if(m == 2){
		if(d > 28) printf("Data invalida!");
	    else printf("%d de fevereiro de %d\n", d, a);
	}
	else if(m == 3){
		if(d > 31)printf("Data invalida\n!");
		else printf("%d de marco de %d\n", d, a);
	}
	else if(m == 4){
	 	if(d > 30) printf("Data invalida!");
		else printf("%d de abril de %d\n", d, a);
	}
	else if(m == 5){
	 	if(d > 31) printf("Data invalida!\n");
		else printf("%d de maio de %d", d, a);
	}
	else if(m == 6){
	 	if(d > 30) printf("Data invalida!\n");
		else printf("%d de junho de %d", d, a);
	}
	else if(m == 7){
	 	if(d > 31) printf("Data invalida!\n");
		else printf("%d de julho de %d", d, a);
	}
	else if(m == 8){
	 	if(d > 31) printf("Data invalida!\n");
		else printf("%d de agosto de %d", d, a);
	}
	else if(m == 9){
	 	if(d > 30) printf("Data invalida!\n");
		else printf("%d de setembro de %d", d, a);
	}
	else if(m == 10){
	 	if(d > 31) printf("Data invalida!\n");
		else printf("%d de outubro de %d", d, a);
	}
	else if(m == 11){
	 	if(d > 30) printf("Data invalida!\n");
		else printf("%d de novembro de %d", d, a);
	}
	else if(m == 12) {
	 	if(d > 31) printf("Data invalida!\n");
		else printf("%d de dezembro de %d\n", d, a);
	}




	return 0;
}

