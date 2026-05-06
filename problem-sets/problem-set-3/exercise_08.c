#include <stdio.h>

int main(void){

    int pa, pb, ano;

    scanf("%d %d", &pa, &pb);

    ano = 0;

    while(pa < pb){
    	pa = pa + (pa * 0.03);
    	pb = pb + (pb * 0.015);
    	ano++;
	}

	printf("ANOS = %d\n", ano);

    return 0;
}
