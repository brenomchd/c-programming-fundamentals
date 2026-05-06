#include <stdio.h>
int contra(int x){
	int c, d, u;
	c = x /100;
	d = (x % 100) / 10;
	u = (x % 100) % 10;
	x = (u * 100) + (d * 10) + c;

	return (x);
}
int main(void){

	int t, a , b, aux = 0;

	scanf("%d", &t);

    while(aux < t){
    	scanf("%d %d", &a, &b);
    	if(contra(a) > contra(b)) printf("%d\n", contra(a));
    	else if(contra(b) > contra(a)) printf("%d\n", contra(b));
		aux++;
	}

    return 0;
}

