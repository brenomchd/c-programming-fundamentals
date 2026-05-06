#include <stdio.h>


int main(void){

	unsigned int n , a, b, x, y;

	scanf("%u", &n);

	if(n >= 100000){
	 printf("NUMERO INVALIDO\n");

	 return 0;
	}

	if(n >= 10000){

		a = n / 10000;
		b = (n % 10000) / 1000;
		x = ((((n % 10000) % 1000) % 100)) / 10;
		y = ((((n % 10000) % 1000) % 100)) % 10;

		if (a == y && b == x) printf("PALINDROMO\n");

 		else printf("NAO PALINDROMO\n");
    }

 	else if(n >= 1000 && n < 10000){

		a = n / 1000;
		b = (n % 1000) / 100;
		x = ((n % 1000) % 100) / 10;
	 	y = ((n % 1000) % 100) % 10;

 		if (a == y && b == x) printf("PALINDROMO\n");

 		else printf("NAO PALINDROMO\n");
	}

 	else if(n >= 100 && n < 1000){

 		a = n / 100;
 		y = ((n % 100) % 10);

 		if (a == y) printf("PALINDROMO\n");

		else printf("NAO PALINDROMO\n");

	 }

	else if(n >= 10 && n < 100){

		a = n / 10;
		y = n % 10;

		if (a == y) printf("PALINDROMO\n");

		else printf("NAO PALINDROMO\n");

	}



	else printf("NUMERO INVALIDO\n");


    return 0;
}
