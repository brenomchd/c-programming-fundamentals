#include <stdio.h>
#include <math.h>
#define tamanho_vetor 1000

double distancia(int fa[], int fb[]){
	double d = 0;
	int i;
	for(i = 0; i < 5; i++){
		d += (fa[i] - fb[i]) * (fa[i] - fb[i]);
	}
	d = sqrt(d);
	return d;
}
void processamento(char X[], int F[]){
	int i;
	for(i = 0; X[i] != '\0'; i++){
		switch(X[i]){
			case 'a':
			case 'A':
				F[0]++;
				break;
			case 'e':
			case 'E':
				F[1]++;
				break;
			case 'i':
			case 'I':
				F[2]++;
				break;
			case 'o':
			case 'O':
				F[3]++;
				break;
			case 'u':
			case 'U':
				F[4]++;
				break;
		}
	}
}
int main(void){

	char A[tamanho_vetor], B[tamanho_vetor], c;
	int fa[5] = {0, 0, 0, 0, 0}, fb[5] = {0, 0, 0, 0, 0}, i;

	scanf("%[^;\n]", A);
	scanf("%c", &c);

	if(c == '\n'){
		printf("FORMATO INVALIDO!\n");
		return 0;
	}

	scanf("%[^\n]", B);

	if(B[0] == ';'){
		printf("FORMATO INVALIDO!\n");
		return 0;
	}

	processamento(A, fa);
	processamento(B, fb);

	printf("(%d", fa[0]);
	for(i = 1; i < 5; i++){
		printf(",%d", fa[i]);
	}
	printf(")\n");

	printf("(%d", fb[0]);
	for(i = 1; i < 5; i++){
		printf(",%d", fb[i]);
	}
	printf(")\n");

	printf("%.2lf\n", distancia(fa, fb));

	return 0;
}
