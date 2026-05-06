#include <stdio.h>
#include <string.h>
struct n{
	char pais[20];
	char feliz[30];
};
int main(void){

	struct n natal[28];

	strcpy(natal[0].pais, "brasil");
	strcpy(natal[1].pais, "alemanha");
	strcpy(natal[2].pais, "austria");
	strcpy(natal[3].pais, "coreia");
	strcpy(natal[4].pais, "espanha");
	strcpy(natal[5].pais, "grecia");
	strcpy(natal[6].pais, "estados-unidos");
	strcpy(natal[7].pais, "inglaterra");
	strcpy(natal[8].pais, "australia");
	strcpy(natal[9].pais, "portugal");
	strcpy(natal[10].pais, "suecia");
	strcpy(natal[11].pais, "turquia");
	strcpy(natal[12].pais, "argentina");
	strcpy(natal[13].pais, "chile");
	strcpy(natal[14].pais, "mexico");
	strcpy(natal[15].pais, "antardida");
	strcpy(natal[16].pais, "canada");
	strcpy(natal[17].pais, "irlanda");
	strcpy(natal[18].pais, "belgica");
	strcpy(natal[19].pais, "italia");
	strcpy(natal[20].pais, "libia");
	strcpy(natal[21].pais, "siria");
	strcpy(natal[22].pais, "marrocos");
	strcpy(natal[23].pais, "japao");

	strcpy(natal[0].feliz, "Feliz Natal!");
	strcpy(natal[1].feliz, "Frohliche Weihnachten!");
	strcpy(natal[2].feliz, "Frohe Weihnacht!");
	strcpy(natal[3].feliz, "Chuk Sung Tan!");
	strcpy(natal[4].feliz, "Feliz Navidad!");
	strcpy(natal[5].feliz, "Kala Christougena!");
	strcpy(natal[6].feliz, "Merry Christmas!");
	strcpy(natal[7].feliz, "Merry Christmas!");
	strcpy(natal[8].feliz, "Merry Christmas!");
	strcpy(natal[9].feliz, "Feliz Natal!");
	strcpy(natal[10].feliz, "God Jul!");
	strcpy(natal[11].feliz, "Mutlu Noeller!");
	strcpy(natal[12].feliz, "Feliz Navidad!");
	strcpy(natal[13].feliz, "Feliz Navidad!");
	strcpy(natal[14].feliz, "Feliz Navidad!");
	strcpy(natal[15].feliz, "Merry Christmas!");
	strcpy(natal[16].feliz, "Merry Christmas!");
	strcpy(natal[17].feliz, "Nollaig Shona Dhuit!");
	strcpy(natal[18].feliz, "Zalig Kerstfeest!");
	strcpy(natal[19].feliz, "Buon Natale!");
	strcpy(natal[20].feliz, "Buon Natale!");
	strcpy(natal[21].feliz, "Milad Mubarak!");
	strcpy(natal[22].feliz, "Milad Mubarak!");
	strcpy(natal[23].feliz, "Merii Kurisumasu!");

	char country[20];
	int i, j;

	while(scanf("%s", country) != EOF){
		for(i = 0, j = 0; i < 24; i++){
			if(strcmp(natal[i].pais, country) == 0){
				printf("%s\n", natal[i].feliz);
				j++;
			}
		}
		if(j == 0) printf("-- NOT FOUND --\n");
	}
	return 0;
}
