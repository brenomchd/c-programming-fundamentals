#include <stdio.h>
#include <string.h>
#define tamanho_string 100000
int main(void){

    int n, i, j, na, leds;
    char a[tamanho_string];

    scanf ("%d", &n);

    for(i = 0; i < n; i++){
        scanf ("%s", a);
        na = strlen (a);
		for(j = 0, leds = 0; j < na; j++){
			if(a[j] == '1') leds = leds + 2;
			else if (a[j] == '7') leds += 3;
			else if (a[j] == '4') leds += 4;
			else if (a[j] == '2' || a[j] == '3' || a[j] == '5') leds += 5;
			else if (a[j] == '9' || a[j] == '6' || a[j] == '0') leds += 6;
			else if (a[j] == '8') leds += 7;
		}

		printf("%d leds\n", leds);
    }



    return 0;
}
