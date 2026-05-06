#include <stdio.h>

int main(void){

	int n, m, c, d, u, m1, c1, d1;

	scanf("%d", &n);

	if((n <= 0) || (n >= 10000)){
		printf("Numero invalido!\n");
		return 0;
	}


	m = n / 1000;
	c = (n % 1000) / 100;
	d = ((n % 1000) % 100) / 10;
	u = ((n % 1000) % 100) % 10;
	m1 = m * 1000;
	c1 = c * 100;
	d1 = d * 10;

	if(n >= 1000){


 		printf("(quarta ordem) %d = %d unidade", n, m);
 		if(m != 1) printf("s");
 			printf(" de milhar");

 		if(c != 0){
			printf(" + %d centena", c);
 			if(c != 1) printf("s");
		}

 		if(d != 0){
    		printf(" + %d dezena", d);
 			if(d != 1) printf("s");
		}

 		if(u != 0){
	 		printf(" + %d unidade", u);
 			if(u != 1)printf("s");
 		}

		printf(" = %d", m1);

		if (c1) printf(" + %d", c1);
		if (d1) printf(" + %d", d1);
   	    if (u) printf(" + %d", u);

   		printf("\n");


	}

	else if((n >= 100) && (n < 1000)){

 	 	printf("(terceira ordem) %d = %d centena", n, c);
	 	if(c != 1){printf("s");}

	    if(d != 0){
    		printf(" + %d dezena", d);
 			if(d != 1) printf("s");
		}

 		if(u != 0){
	 		printf(" + %d unidade", u);
 			if(u != 1)printf("s");
 		}

 		printf(" = %d", c1);

 		if (d1) printf(" + %d", d1);
 		if (u)  printf(" + %d", u);

 		printf("\n");
	}



	else if((n >= 10) && (n < 100)){

		printf("(segunda ordem) %d = %d dezena", n, d);
	    if(d != 1) printf("s");

		if(u != 0){

			printf(" + %d unidade", u);
		 	if(u != 1) printf("s");
		}

		printf(" = %d ", d1);

		if (u) printf("+ %d", u);

		printf("\n");
	}


	else{

		printf("(primeira ordem) %d = %d unidade", n, u);
	    if(u != 1){printf("s");}

		printf(" = %d\n", u);
    }



		return 0;
}

