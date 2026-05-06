#include <stdio.h>


int main(void){

	int l, m, n, a, b, c;
	char x, y, z;

	scanf("%d %d %d\n", &l, &m, &n);
	scanf("%c %c %c", &x, &y, &z);

	if(l > m && l > n) c = l;
	else if(m > l && m > n) c = m;
	else if(n > l && n > m) c = n;

	if (l > m && l < n) b = l;
	else if (l > n && l < m) b = l;
	else if (m > l && m < n) b = m;
	else if (m > n && m < l) b = m;
	else if (n > l && n < m) b = n;
 	else if (n > m && n < l) b = n;

 	if(l < m && l < n) a = l;
	else if(m < l && m < n) a = m;
	else if(n < l && n < m) a = n;

	if(x == 'A'){
		printf("%d", a);
		if(y == 'B') printf(" %d %d\n", b, c);
		else if(y == 'C') printf(" %d %d\n", c, b);
	}

 	else if(x == 'B'){
 		printf("%d", b);
		if(y == 'A') printf(" %d %d\n", a, c);
		else if(y == 'C') printf(" %d %d\n", c, a);
	}

 	else if(x == 'C'){
 		printf("%d", c);
		if(y == 'B') printf(" %d %d\n", b, a);
		else if(y == 'A') printf(" %d %d\n", a, b);
	}

    return 0;
}
